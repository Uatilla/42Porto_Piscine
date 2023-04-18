/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:36:34 by carolive          #+#    #+#             */
/*   Updated: 2023/03/19 18:41:24 by carolive         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 42;
	*b = 24;
	printf("Before:\n %p: %d, %p %d\n", a, *a, b, *b);
	ft_swap(a, b);
	printf("After:\n %p: %d, %p %d\n", a, *a, b, *b);
	return (0);
} */
