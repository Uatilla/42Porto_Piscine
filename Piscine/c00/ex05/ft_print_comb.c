/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:13:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/13 16:40:35 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int c, int d, int u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (c != 55 || d != 56 || u != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 48;
	while (c <= 55)
	{
		d = c + 1;
		while (d <= 56)
		{	
			u = d + 1;
			while (u <= 57)
			{
				ft_print(c, d, u);
				u++;
			}	
			d++;
		}
		c++;
	}
}
