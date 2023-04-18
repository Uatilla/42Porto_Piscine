/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:50:53 by joamonte          #+#    #+#             */
/*   Updated: 2023/03/13 15:06:24 by joamonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swap;

	x = 1;
	while (x < size)
	{
		swap = tab[x];
		y = x -1;
		while (y >= 0 && tab[y] > swap)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swap;
		x++;
	}
}
