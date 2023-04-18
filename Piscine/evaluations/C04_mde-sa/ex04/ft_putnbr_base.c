/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sa-- <mde-sa--@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:26:57 by mde-sa--          #+#    #+#             */
/*   Updated: 2023/03/15 17:22:07 by mde-sa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] <= 32 || str[i] == 127)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	int		basecheck;
	long	n;

	basecheck = base_check(base);
	length = ft_strlen(base);
	n = nbr;
	if (basecheck == 0)
		return ;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}
	if (n < length)
		ft_putchar(base[n]);
	if (n >= length)
	{
		ft_putnbr_base((n / length), base);
		ft_putnbr_base((n % length), base);
	}
}
