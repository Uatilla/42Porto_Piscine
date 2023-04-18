/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsequeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:55:43 by bsequeir          #+#    #+#             */
/*   Updated: 2023/03/19 16:55:47 by bsequeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	negative(int nb)
{
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	print(int *v, int i)
{
	while (i < 11)
	{
		v[i] = 48 + v[i];
		write (1, &v[i], 1);
		i++;
	}
}

void	menorque10(int nb, int *v)
{
	if (nb < 10)
	{
		v[0] = 0;
		v[10] = nb % 10;
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	int	v[11];

	i = 10;
	v[0] = 1;
	nb = negative(nb);
	menorque10(nb, v);
	while (v[0] != 0)
	{
		if (nb > 9)
		{
			v[i] = nb % 10;
			nb = nb / 10;
		}
		if (nb / 10 == 0)
		{
			v[i - 1] = nb % 10;
			v[0] = 0;
		}
		i--;
	}
	print(v, i);
}

/*int	main(void)
{
	ft_putnbr(1);
}*/
