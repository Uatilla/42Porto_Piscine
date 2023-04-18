/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmenezes <rmenezes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:06:09 by rmenezes          #+#    #+#             */
/*   Updated: 2023/03/13 20:27:33 by rmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prinseq(char d, char e, char f)
{
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, &f, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				prinseq(a, b, c);
				if (a != '7')
				{
					write (1, ", ", 2);
				}
			c++;
			}
		b++;
		}
	a++;
	}
}
