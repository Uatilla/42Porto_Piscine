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

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_hex_base(unsigned long decimal_address, int flag)
{
	int	letter_counter;
	char		*base;

	letter_counter = 0;
	if (flag == 'X')
		base = "0123456789ABCDEF";
	if (flag == 'x')
		base = "0123456789abcdef";
	if (decimal_address >= 16)
	{
		letter_counter += ft_hex_base(decimal_address / 16, flag);
		letter_counter += ft_hex_base(decimal_address % 16, flag);
	}
	else
	{
		letter_counter += ft_putchar(base[decimal_address]);
	}
	return (letter_counter);
}

/*int	flag_conversor(char flag, va_list args)
{
	int	letter_counter;

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
	if (flag == 'x' || flag == 'X')
		letter_counter += ft_hex_base(va_arg(args, unsigned long), flag);
	else
	{
		//write(1,"a",1);
	}
	return (letter_counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	const char	*ptr = str;
	int	letter_counter;

	letter_counter = 0;
	va_start(args, str);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			letter_counter += flag_conversor(*ptr, args);
		}
		else
		{
			letter_counter += ft_putchar(*ptr);
		}
		ptr++;
	}
	va_end(args);
	return (letter_counter);
}*/


