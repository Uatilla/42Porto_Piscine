/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamonte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:57:00 by joamonte          #+#    #+#             */
/*   Updated: 2023/03/13 12:49:19 by joamonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(void)
{
	int beta = 12345;
	int *alfa = &beta;
	ft_rev_int_tab(alfa,9);
return(0);
}
