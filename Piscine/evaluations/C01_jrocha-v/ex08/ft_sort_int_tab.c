/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:08:08 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/14 14:26:18 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	j = 0;
	while (j < size - 1)
	{	
		i = 0;
		while (i < size - 1)
		{
			t = tab[i];
			if (tab[i + 1] < tab[i])
			{
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
			}
			i++;
		}
		j++;
	}
}

/*
int	main(void)
{
	int *tab;
	int counter;
	int n;

	n = 6;
	tab = calloc(n, sizeof(int));
	int x[6] = {-65,0,32,-511,7,34};
	tab = &x[0];

	counter = -1;
	while (n-1 > counter++)
		printf("%d ", x[counter]);
	ft_sort_int_tab(tab, n);
	printf("%c", '\n');

	counter =-1;
	while (n-1 > counter++)
		printf("%d ", tab[counter]);
	printf("%c", '\n');
	return(0);
}
*/