/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:04:23 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/31 21:04:26 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max_value;

	i = 0;
	max_value = INT_MIN;
	if (!tab[i])
		return (0);
	while (i < len)
	{
		if (i == 0)
			max_value = tab[i];
		else
		{
			if (max_value < tab[i])
				max_value = tab[i];
		}
		i++;
	}
	return (max_value);
}
/*
int	main()
{
	int	num = 7;
	int	array[] = {-42, 0, -5, -64, -2, -68, -1};
	
	int	max_value;
	
	max_value = max(array, num);
	printf("biggest: %d\n", max_value);
	return (0);
}*/
