/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:48:16 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/15 14:28:04 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
	printf("a: %d, b: %d\n", *a, *b);
	
}

int	main(void)
{
	int	a;
	int	b;
	
	a = 9;
	b = 4;
	
	int *x = &a;
	int *y = &b;
	
	ft_ultimate_div_mod(x, y);
return (0);
}
