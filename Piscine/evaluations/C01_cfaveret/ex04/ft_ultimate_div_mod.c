/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaveret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:27:34 by cfaveret          #+#    #+#             */
/*   Updated: 2023/03/15 00:50:38 by cfaveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 45;
	b = 11;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d, mod: %d", a, b);
}*/
