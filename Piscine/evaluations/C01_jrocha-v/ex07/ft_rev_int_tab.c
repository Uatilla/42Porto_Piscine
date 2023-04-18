/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:10:07 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/14 14:16:45 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	while (i < (size / 2))
	{
		t = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = t;
		i++;
	}
}

/*
int	main(void)
{
	int *tab;
	int counter;
	int n;

	n = 10;
	tab = calloc(n, sizeof(int));
	int x[10] = {0,1,2,3,4,5,6,7,8,9};
	tab = &x[0];

	counter = -1;
	while (n-1 > counter++)
		printf("%d ", x[counter]);
	ft_rev_int_tab(tab, n);
	printf("%c", '\n');

	counter =-1;
	while (n-1 > counter++)
		printf("%d ", tab[counter]);
	printf("%c", '\n');
	return(0);
}
*/