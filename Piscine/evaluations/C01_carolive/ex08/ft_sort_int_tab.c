/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:00:56 by carolive          #+#    #+#             */
/*   Updated: 2023/03/19 21:21:49 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *b;
	*b = *a;
	*a = num;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *tab;
    int counter;

    srand(1);
    counter = 0;
    tab = calloc(10, sizeof(int));
    while (counter < 10)
    {
        tab[counter] = rand() % 100;
        counter++;
    }
    counter = -1;
    while (9 > counter++)
        printf("%d ", tab[counter]);
    ft_sort_int_tab(tab, 10);
    printf("%c", '\n');
    counter = -1;
    while (9 > counter++)
        printf("%d ", tab[counter]);
    printf("%c", '\n');
    return (0);
} 
