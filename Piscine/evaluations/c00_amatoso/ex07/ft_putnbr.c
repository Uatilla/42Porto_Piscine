/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatoso <amatoso@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:28:02 by amatoso           #+#    #+#             */
/*   Updated: 2023/03/18 14:43:53 by amatoso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
        write(1, "\n", 1);
	ft_putnbr(42);
        write(1, "\n", 1);
	ft_putnbr(2147483647);
        write(1, "\n", 1);
	ft_putnbr(-2147483648);
        write(1, "\n", 1);
	return (0);
}
*/
