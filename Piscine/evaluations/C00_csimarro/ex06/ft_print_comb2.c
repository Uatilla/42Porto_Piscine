/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 10:39:26 by csimarro          #+#    #+#             */
/*   Updated: 2023/03/14 21:50:11 by csimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar(nb / 10 + '0');
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
