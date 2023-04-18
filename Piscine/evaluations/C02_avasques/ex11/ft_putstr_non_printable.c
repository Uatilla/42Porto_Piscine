/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:30:08 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 10:09:47 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			write(1, "0", 1);
		write(1, &base[c], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 10)
		{
			write(1, "\\", 1);
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
int main()
{
    char str1[] = "Ola\nesta bem?";
    ft_putstr_non_printable(str1);
}
