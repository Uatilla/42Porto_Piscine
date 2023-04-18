/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frodrige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:58:25 by frodrige          #+#    #+#             */
/*   Updated: 2023/03/15 21:15:09 by frodrige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char val1, char val2, char val3)
{
	write(1, &val1, 1);
	write(1, &val2, 1);
	write(1, &val3, 1);
}

void	ft_print(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		ft_putchar(a, b, c);
	}
	else
	{
		ft_putchar(a, b, c);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_print(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb();
}
