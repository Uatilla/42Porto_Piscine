/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:28:41 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/15 14:28:43 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;

	i = 0;
	while (i < (size / 2))
	{
		s = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = s;
		i++;
	}
}
