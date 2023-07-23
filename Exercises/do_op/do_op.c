/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:16:51 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/23 16:29:39 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_result(int v1, int v2, char op)
{
	int	num;

	if (op == 43)
		num = v1 + v2;
	else if (op == 45)
		num = v1 - v2;
	else if (op == 42)
		num = v1 * v2;
	else if (op == 47)
		num = v1 / v2;
	else if (op == 37)
		num = v1 % v2;
	ft_putnbr(num);
}

int	ft_strtoint(char *str)
{
	int	signal;
	int	i;
	int	x;
	int	num;

	signal = 1;
	i = 0;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	num = 0;
	while (str[i] != '\0')
	{
		x = str[i] - 48;
		num += x;
		i++;
		if (str[i] != '\0')
			num *= 10;
	}
	if (signal == -1)
		num *= -1;
	return (num);
}

int	main(int argc, char **argv)
{
	int	value_1;
	int	value_2;

	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		value_1 = ft_strtoint(argv[1]);
		value_2 = ft_strtoint(argv[3]);
		ft_result (value_1, value_2, argv[2][0]);
		write(1, "\n", 1);
	}
	return (0);
}
