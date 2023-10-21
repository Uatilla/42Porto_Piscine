/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:31:51 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/19 21:31:53 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*inp_itoa(int len, int nbr, char *str)
{
	int	i;

	i = 1;
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	else
	{
		while (nbr > 0)
		{
			str[len - i] = nbr % 10 + '0';
			nbr /= 10;
			i++;
		}
	}
	return (str);
}

int	get_len(int num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		counter++;
		num = num * (-1);
	}
	while (num > 0)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	len = get_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	str = inp_itoa(len, nbr, str);
	return (str);
}
/*
int	main()
{
	int	num;

	num = -123;
	printf("%s\n",ft_itoa(num));
	return (0);
}*/
