/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaveret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:16:47 by cfaveret          #+#    #+#             */
/*   Updated: 2023/03/14 19:25:24 by cfaveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d", a, b, div, mod);
}*/
