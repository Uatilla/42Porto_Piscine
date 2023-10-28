/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:08:03 by uviana-a          #+#    #+#             */
/*   Updated: 2023/10/23 20:08:05 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (str[i] != '\0')
	{
		n = n * 10;
		n = n + str[i] - 48;
		i++;
	}
	return (n);
}

void	print_hex(int n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		print_hex (n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	int	num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
	return (0);
}
