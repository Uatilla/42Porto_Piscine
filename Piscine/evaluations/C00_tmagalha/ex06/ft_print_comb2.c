/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagalha <tmagalha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:50:10 by tmagalha          #+#    #+#             */
/*   Updated: 2023/03/14 09:33:55 by tmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			write (1, " ", 1);
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}

