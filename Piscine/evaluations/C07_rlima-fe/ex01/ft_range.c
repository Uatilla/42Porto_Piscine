/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:03:31 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/28 11:47:05 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*int		main(void)
{
	int		i;
	int		*tab;

	tab = ft_range(52, 59);
	i = 0;
	while (i < 7)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/