/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:02:49 by uviana-a          #+#    #+#             */
/*   Updated: 2023/05/28 15:40:06 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c_test;
	char	*s_test;
	char	*p_test;
	int		xx_test;

	c_test = 'U';
	s_test = "Uatilla";
	p_test = 0;
	xx_test = 123456789;
	printf("%d\n", printf("Or_printf: [%c]\n", NULL));
	printf("%d\n", ft_printf("ft_printf: [%c]\n", NULL));
	printf("%d\n", printf("Or_printf: [%s]\n", NULL));
	printf("%d\n", ft_printf("ft_printf: [%s]\n", NULL));
	printf("%d\n", printf("Or_printf: [%p]\n", (void *)0));
	printf("%d\n", ft_printf("ft_printf: [%p]\n", (void *)0));
	printf("%d\n", printf("Or_printf: [%x]\n", NULL));
	printf("%d\n", ft_printf("ft_printf: [%x]\n", NULL));
	printf("%d\n", printf("Or_printf: [%X]\n", NULL));
	printf("%d\n", ft_printf("ft_printf: [%X]\n", NULL));
	printf("%d\n", printf("Or_printf: [%%]\n"));
	printf("%d\n", ft_printf("ft_printf: [%%]\n"));
	printf("%d\n", printf("Or_printf: [%d]\n", NULL));
	printf("%d\n", ft_printf("ft_printf: [%d]\n", NULL));
	ft_printf(" %x \n", LONG_MAX);
	return (0);
}
