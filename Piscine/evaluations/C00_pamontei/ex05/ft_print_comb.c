/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:09:17 by pamontei          #+#    #+#             */
/*   Updated: 2023/03/12 19:09:34 by pamontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb ();
	return (0);
}*/
