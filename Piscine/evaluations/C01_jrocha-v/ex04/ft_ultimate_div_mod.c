/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-v <jrocha-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:25:39 by jrocha-v          #+#    #+#             */
/*   Updated: 2023/03/14 13:09:17 by jrocha-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*temp_a;
	int	*temp_b;

	temp_a = a;
	temp_b = b;
	*a = *temp_a / *b;
	*b = *temp_b % *b;
}

/*
int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 20;
	*b = 4;

	printf("*a: %d, *b: %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("*a: %d, *b: %d\n", *a, *b);
	return (0);
}
*/