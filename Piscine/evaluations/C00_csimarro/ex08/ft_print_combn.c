/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:25:02 by csimarro          #+#    #+#             */
/*   Updated: 2023/03/14 17:24:07 by csimarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	v[10];
	char	v_max[10];
	int		pos;
	int		valor;
	int		i;

	i = 0;
	while (i < n)
	{
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(v, n, v_max[0]);
	while (v[0] != v_max[0])
	{
		pos = n - 1;
		while (v[pos] == v_max[pos])
			--pos;
		valor = ++(v[pos]);
		while (pos < n)
			v[++pos] = ++valor;
		print_array(v, n, v_max[0]);
	}
}
