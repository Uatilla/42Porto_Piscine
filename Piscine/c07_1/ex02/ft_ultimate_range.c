/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:47:26 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/28 20:47:28 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (0);
	}
	*range = (int *) malloc(((max - min) + 1) * sizeof(int));
	if (range == NULL)
	{
		return (-1);
	}
	else
	{
		while (i < max)
		{
			(*range)[j] = i;
			i++;
			j++;
		}
		(*range)[j] = '\0';
		return (max - min);
	}
}
/*
int	main()
{
	int	*range;
	ft_ultimate_range(&range, 5, 15);
	while (*range != '\0')
	{
		printf("%d ", *range);
		range++;
	}
	return (0);
}*/
