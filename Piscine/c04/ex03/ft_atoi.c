/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:22:44 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/23 11:22:47 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char	*str)
{
	int	signal;
	int	number;

	signal = 1;
	number = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*(str) == '-')
		{
			signal = signal *(-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	return (signal * number);
}
/*
int	main()
{
	char	*string = "   -----+--+1235bd67";
	printf("%d", ft_atoi(string));
	return (0);
}*/
