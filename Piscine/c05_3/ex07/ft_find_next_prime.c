/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:21:26 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/27 17:21:27 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1)
	{
		return (2);
	}
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			nb++;
			div = 1;
		}
		div++;
	}
	return (nb);
}
/*
int	main()
{
	int	num;
	
	num = -1;
	printf("%d",ft_find_next_prime(num));
	return (0);
}*/
