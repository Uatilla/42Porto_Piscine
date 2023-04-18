/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:04:21 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/28 20:04:22 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		j;
	int		*range;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		range = (int *) malloc(((max - min) + 1) * sizeof(int));
		while (i < max)
		{
			range[j] = i;
			i++;
			j++;
		}
		range[j] = '\0';
		return (range);
	}
}
/*
int	main()
{
	int	*ret;

	ret = ft_range(5, 15);
	while (*ret)
		{
			printf("%d",*ret);
			ret++;
		}
	return (0);
}*/
