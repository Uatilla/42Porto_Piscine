/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:01:18 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/25 16:01:20 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		while (nb > 0)
		{
			result = result * (nb);
			nb = nb - 1;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
/*
int	main()
{
	int	num;
	num = 5;
	printf("%d",ft_iterative_factorial(num));
	return (0);
}*/
