/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:14:43 by tiago             #+#    #+#             */
/*   Updated: 2023/03/13 17:32:37 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int		last_digit;
	int		arr[10];
	int		count;
	char	num_print;

	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		last_digit = nbr % 10;
		num_print = last_digit + 48;
		arr[count] = num_print;
		count++;
		nbr /= 10;
	}
	while (count >= 0)
	{
		count--;
		write(1, &(arr[count]), 1);
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putnbr(-212145);
	ft_putnbr(12145);
	ft_putnbr(0);
}
