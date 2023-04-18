/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:03:21 by nimartin          #+#    #+#             */
/*   Updated: 2023/03/14 17:03:24 by nimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_helper(char c, int n)
{
	char	result;

	result = 0;
	if (n == 0)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ft_helper(a, 0));
			ft_putchar(ft_helper(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_helper(b, 0));
			ft_putchar(ft_helper(b, 1));
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
return(0);
}

