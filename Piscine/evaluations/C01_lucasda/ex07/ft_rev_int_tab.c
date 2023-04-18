/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:48:07 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/14 18:03:35 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	m;
	int	i;
	int	v;

	i = 0;
	m = size / 2;
	while (i < m)
	{
		v = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = v;
		i++;
	}
}

int	main(void)
{
	int	size = 8;
	int	value;
	value = 123456;
	*tab = &value;
	ft_rev_int_tab(*tab, size);
}
