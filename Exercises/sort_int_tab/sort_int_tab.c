/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:53:14 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/16 16:53:16 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main()
{
	int	size = 5;
	int	num_array[5] = {2, 5, 1, 0, -5};
	int	i = 0;

	while (i < size)
	{
		printf("[%d]: %d\n", i, num_array[i]);
		i++;
	}
	sort_int_tab(num_array, 5);	
	i = 0;
	while (i < size)
	{
		printf("[%d]: %d\n", i, num_array[i]);
		i++;
	}
}
