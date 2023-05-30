/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:02:49 by uviana-a          #+#    #+#             */
/*   Updated: 2023/05/26 16:02:53 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	flag_conversor(char flag, va_list args)
{
	int		letter_counter;

	letter_counter = 0;
	if (flag == '%')
		letter_counter += ft_putchar('%');
	if (flag == 'c')
		letter_counter += ft_putchar(va_arg(args, int));
	if (flag == 's')
		letter_counter += ft_putstr(va_arg(args, char *));
	if (flag == 'p')
	{
		letter_counter += ft_putstr("0x");
		letter_counter += ft_hex_base(va_arg(args, unsigned long), 'x');
	}
	return (letter_counter);
}

int	flag_conversor2(char flag, va_list args)
{
	int		letter_counter;
	char	*int_converted;

	letter_counter = 0;
	if (flag == 'x' || flag == 'X')
		letter_counter += ft_hex_base(va_arg(args, unsigned long), flag);
	if (flag == 'd' || flag == 'i')
	{
		int_converted = ft_itoa(va_arg(args, int));
		ft_putstr(int_converted);
		letter_counter += ft_strlen(int_converted);
	}
	if (flag == 'u')
		letter_counter += ft_ubase(va_arg(args, unsigned int));
	return (letter_counter);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*ptr = str;
	int			letter_counter;

	letter_counter = 0;
	va_start(args, str);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%' || *ptr == 'c' || *ptr == 's' || *ptr == 'p')
				letter_counter += flag_conversor(*ptr, args);
			if (*ptr == 'x' || *ptr == 'X' || *ptr == 'd' || *ptr == 'i'
				|| *ptr == 'u')
				letter_counter += flag_conversor2(*ptr, args);
		}
		else
			letter_counter += ft_putchar(*ptr);
		ptr++;
	}
	va_end(args);
	return (letter_counter);
}
