/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:13:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/13 17:09:55 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 2);
}

void	ft_print2(int n1, int n2)
{
	char	array[5];

	array[0] = '0' + n1 / 10;
	array[1] = '0' + n1 % 10;
	array[2] = ' ';
	array[3] = '0' + n2 / 10;
	array[4] = '0' + n2 % 10;
	write(1, &array, 5);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 99 || n2 < 99)
	{
		if (n2 > n1)
		{
			ft_print2(n1, n2);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
		}
		n2++;
		if (n2 > 99)
		{
			n2 = 0;
			n1++;
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2 ();

return(0);
}*/
