/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:17:03 by dcaldas-          #+#    #+#             */
/*   Updated: 2023/03/21 21:31:23 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{	
		ft_putchar(nb + 48);
	}
}
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
}
