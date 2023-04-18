/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:15:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/15 12:15:48 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempd;
	int	tempr;

	tempd = *a / *b;
	tempr = *a % *b;
	a = &tempd;
	b = &tempr;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 9;
	b = 4;
	
	int *x = &a;
	int *y = &b;
	
	ft_ultimate_div_mod(x, y);
return(0);
}

add this line of code inside void function to see the result of the function:
	printf("tempd: %d, tempr: %d\n",tempd, tempr);
	printf("a: %d, b: %d\n", *a, *b);*/
