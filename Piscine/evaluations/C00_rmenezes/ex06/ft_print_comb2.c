/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmenezes <rmenezes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:46:36 by rmenezes          #+#    #+#             */
/*   Updated: 2023/03/14 13:25:29 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int i)
{
	char	j;

	if (i < 10)
	{
		j = i + 48;
		write(1, "0", 1);
		write(1, &j, 1);
		return ;
	}
	j = (i / 10) + 48;
	write(1, &j, 1);
	j = i % 10 + 48;
	write(1, &j, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	while (c < 99)
	{
	d = c +1;
		while (d <= 99)
		{
			print_num(c);
			write (1, " ", 1);
			print_num(d);
			if (c == 98 && d == 99)
				write(1, "\n", 1);
			else
				write(1, ", ", 2);
		d++;
		}
	c++;
	}
}

int	main(void)
{
	ft_print_comb2();
return(0);
}
