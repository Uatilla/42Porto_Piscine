/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagalha <tmagalha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:51:41 by tmagalha          #+#    #+#             */
/*   Updated: 2023/03/14 09:30:51 by tmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a +1;
		while (b <= 8)
		{
			c = b +1;
			while (c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (! (a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}

