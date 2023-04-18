/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:10:37 by carolive          #+#    #+#             */
/*   Updated: 2023/03/19 18:56:22 by carolive         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		i++;
		size--;
	}
}
/* 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7};
    int i = 0;
    int size = 7;

    printf("Antes  :");
    while (i < size)
        printf("[ %d ]", tab[i++]);
    ft_rev_int_tab(tab, size);
    i = 0;
    printf("\nDepois :");
    while (i < size)
        printf("[ %d ]", tab[i++]);
} */
