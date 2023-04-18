/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaveret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 04:26:05 by cfaveret          #+#    #+#             */
/*   Updated: 2023/03/15 04:36:01 by cfaveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size)
	{
		if (tab[a] > tab[a + 1])
		{
		swap = tab[a];
		tab[a] = tab[a + 1];
		tab[a + 1] = swap;
		a = 0;
		}
		else
		{
			a++;
		}
	}
}

/*int	main(void)
{
	int	arr[5] = {1, 4, 7, 6, 2};
	int	i;
	int	size;

	i = 0;
	size = 5;
	ft_sort_int_tab (arr, size);
	while (i < size)
	{
		printf ("%d", arr[i]);
		i++;
	}
}*/
