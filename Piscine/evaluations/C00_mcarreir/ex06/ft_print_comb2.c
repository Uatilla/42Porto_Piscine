/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:41:07 by mcarreir          #+#    #+#             */
/*   Updated: 2023/03/14 11:03:52 by mcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_n(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (n / 10) + 48;
	write(1, &c, 1);
	c = n % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	short	v[2];

	v[0] = 0;
	while (v[0] < 99)
	{
		v[1] = v[0] + 1;
		while (v[1] < 100)
		{
			write_n(v[0]);
			write(1, " ", 1);
			write_n(v[1]);
			if (v[0] == 98 && v[1] == 99)
				write(1, "\n", 1);
			else
				write(1, ", ", 2);
			v[1]++;
		}
		v[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
