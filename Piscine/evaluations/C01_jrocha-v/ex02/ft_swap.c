/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:57:31 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/13 11:22:56 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{	
	int *a = calloc(1, sizeof(int));
	int *b = calloc(1, sizeof(int));

	*a = 20;
	*b = 5;
	printf("Before: %d, %d\n",*a,*b);
	ft_swap(a, b);
	printf("After: %d, %d\n", *a, *b);
	return (0);
}
*/