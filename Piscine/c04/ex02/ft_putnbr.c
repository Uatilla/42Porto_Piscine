/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:30:08 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/23 10:30:10 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	c = '0' + (nb % 10);
	write(1, &c, 1);
}
/*
int	main(void)
{
	int	n_min;
	int	n_max;
	int	n_p;
	int	n_n;
	
	n_min = -2147483648;
	n_max = 2147483647;
	n_p = 2345;
	n_n = -2345;
	
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(2345);
	write(1, "\n", 1);
	ft_putnbr(-2345);
	write(1, "\n", 1);
	return (0);
}*/
