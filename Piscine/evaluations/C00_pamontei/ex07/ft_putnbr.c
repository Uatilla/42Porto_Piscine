/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:29:11 by pamontei          #+#    #+#             */
/*   Updated: 2023/03/17 11:34:34 by pamontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < INT_MAX && nb > INT_MIN)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
	else
		write(1, "error, write within MIN and MAX integer", 39);
}

int	main(void)
{
	ft_putnbr(-2147483647);
	ft_putnbr(0);
	ft_putnbr(225);
}
