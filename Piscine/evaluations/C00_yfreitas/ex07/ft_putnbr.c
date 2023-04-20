/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:28:09 by yfreitas          #+#    #+#             */
/*   Updated: 2023/03/12 19:32:44 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnb(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "2147483648", 11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
	{
		c = nb + '0';
		write (1, &c, 1);
	}
}

int	main(void)
{
	ft_putnb(-2147483647);

return (0);
}
