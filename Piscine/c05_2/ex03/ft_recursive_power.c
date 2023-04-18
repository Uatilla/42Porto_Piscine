/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:21:41 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/27 11:21:43 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{	
	if (power == 0 || (power == 0 && nb == 0))
	{
		return (1);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (1 / ft_recursive_power(nb, -power));
	}
}
/*
int	main()
{
	int	num;
	int	pow;
	
	num = 2;
	pow = 3;
	
	printf("%d\n",ft_recursive_power(num, pow));
	return (0);
}*/
