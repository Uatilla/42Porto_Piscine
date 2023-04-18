/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:37:24 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/15 11:48:42 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pa = &a;
	int	*pb = &b;
	
	a = 6;
	b = 2;

	ft_div_mod(a, b, pa, pb);
	
return(0);
}
Add this line of code inside the void function to show the results.
printf("a: %d, b: %d, *div: %d, *mod: %d", a, b, *div, *mod)*/
