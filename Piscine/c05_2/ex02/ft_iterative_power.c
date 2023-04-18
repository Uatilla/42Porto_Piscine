/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:36:24 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/25 17:36:27 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main()
{
	int	num;
	int	pow;
	
	num = 5;
	pow = 3;
	
	printf("%d\n",ft_iterative_power(num, pow));
	
	return (0);
}*/
