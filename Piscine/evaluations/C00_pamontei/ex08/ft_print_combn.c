/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:56:23 by pamontei          #+#    #+#             */
/*   Updated: 2023/03/18 17:56:27 by pamontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}
/*writes numbers on sequence
+ '0' is to transform in char*/

void	ft_print_combn_increment(int n, int *tab)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_putout(n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
		{
			tab[n - 1] += 1;
		}
		else
		{
			ft_print_combn_increment(n, tab);
		}
		ft_putout(n, tab, 1);
	}
}
/*determine size of array "tab"
incrementador de array
depois chama ft_putout

se ultimo array for menor que nove aumentamos um ao ultimo array
quando o ultimo array ja for igual a nove*/

int	main(void)
{
	ft_print_combn (3);
}
