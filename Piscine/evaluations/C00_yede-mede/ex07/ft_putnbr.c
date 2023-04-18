/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mede <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:05:02 by yde-mede          #+#    #+#             */
/*   Updated: 2023/03/13 19:20:08 by yde-mede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{	
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar (n + '0');
	}
	else
	{
		ft_putnbr (n / 10);
		ft_putchar (n % 10 + '0');
	}
}
