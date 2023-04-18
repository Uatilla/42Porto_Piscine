/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaveret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:52:45 by cfaveret          #+#    #+#             */
/*   Updated: 2023/03/15 04:35:34 by cfaveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	initial;
	int	last;
	int	swap;

	initial = 0;
	last = size - 1;
	while (initial < last)
	{
		swap = tab[initial];
		tab[initial] = tab[last];
		tab[last] = swap;
		initial++;
		last--;
	}
}

/*int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_rev_int_tab(a, size);
	while (i < size)
	{
		printf ("%d", a[i]);
		i++;
	}
}*/
