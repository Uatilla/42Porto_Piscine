/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagalha <tmagalha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:32:01 by tmagalha          #+#    #+#             */
/*   Updated: 2023/03/13 11:53:45 by tmagalha         ###   ########.fr       */
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
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	main(void)
{
	ft_putnbr (200);
	write (1, "\n", 1);
	ft_putnbr (-42);
	write (1, "\n", 1);
	ft_putnbr (0);
	write (1, "\n", 1);
	ft_putnbr (2147483647);
	write (1, "\n", 1);
	ft_putnbr (-2147483648);
	write (1, "\n", 1);
	return (0);
}
