/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:36:27 by uviana-a          #+#    #+#             */
/*   Updated: 2023/05/28 15:36:28 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	ft_get_len(long int n)
{
	long int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = n *(-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*inp_itoa(long int num, int len, char *str_ft_itoa)
{
	int	i;

	i = 1;
	if (num == 0)
		str_ft_itoa[0] = '0';
	while (num > 0)
	{
		str_ft_itoa[len - i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	return (str_ft_itoa);
}

char	*ft_itoa(int n)
{
	char	*str_ft_itoa;
	char	*str_ft_itoa2;
	long	num;
	int		len;

	len = ft_get_len(n);
	str_ft_itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_ft_itoa)
		return (NULL);
	if (n < 0)
	{
		num = (long)n * (-1);
		str_ft_itoa[0] = '-';
	}
	else
		num = n;
	str_ft_itoa2 = inp_itoa(num, len, str_ft_itoa);
	str_ft_itoa2[len] = '\0';
	return (str_ft_itoa2);
}

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
	int		letter_counter;
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

int	ft_ubase(unsigned int number)
{
	int	letter_counter;

	letter_counter = 0;
	if (number >= 10)
	{
		letter_counter += ft_ubase(number / 10);
		letter_counter += ft_ubase(number % 10);
	}
	else
	{
		letter_counter = ft_putchar("0123456789"[number]);
	}
	return (letter_counter);
}
