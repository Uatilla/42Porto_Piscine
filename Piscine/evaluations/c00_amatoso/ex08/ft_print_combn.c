/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatoso <amatoso@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:02:35 by amatoso           #+#    #+#             */
/*   Updated: 2023/03/20 20:34:51 by amatoso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print(int *tab, int n)
{
	int	i = 1;
	int	low = 1;

	while (i < n)
	{
		if (tab[i-1] >= tab[i])
		{
			low = 0;
			i++;
		}
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar (tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i = 0;
	int	tab[n];

	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10-n) && n >= 1 && n < 10)
	{
		print(tab, n);
			tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
*/
