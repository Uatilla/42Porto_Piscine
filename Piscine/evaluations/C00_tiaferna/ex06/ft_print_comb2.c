/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:30:35 by tiaferna          #+#    #+#             */
/*   Updated: 2023/03/14 11:12:21 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a, char b)
{
	int	a1;
	int	a2;
	int	b1;
	int	b2;

	a1 = (char)(a / 10) + 48;
	a2 = (char)(a % 10) + 48;
	b1 = (char)(b / 10) + 48;
	b2 = (char)(b % 10) + 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		put_char(a, b);
		if (a == 98 && b == 99)
		{
			return ;
		}
		write(1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
}
