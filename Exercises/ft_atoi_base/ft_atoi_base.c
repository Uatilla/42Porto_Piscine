/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:33:52 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/28 12:34:01 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_digit(char digit, int base_goal)
{
	int	max_digit;

	if (base_goal <= 10)
		max_digit = base_goal + 48;
		//If I pass 1996 to base 7 here should return 103 = 'g'
	else
		max_digit = base_goal - 10 + 'a';
	if (digit >= '0' && digit <= '9' && digit <= max_digit)
		return (digit - 48);
	else if (digit >= 'a' && digit <= 'f'  && digit <= max_digit)
		return (10 + digit - 97);
	else
		return (-1);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_atoi_base(const char *str, int int_base)
{
	int	i;
	int	sign;
	int	digit;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	/*1) Check if the number is negative"*/
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	/*2) Use function to_lower to convert any letter into lower case*/
	/*3) Use function get_digit to return into the digit variable the value of the "convertion".*/
	while ((digit = get_digit(to_lower(str[i]), int_base)) >= 0)
	{
		result = result * int_base;
		result = result + (digit * sign);
		++i;
	}
	return (result);
	
}
/*
int	main()
{
	char *year_based = "1996";
	int	year_return;
	int	i;

	i = 16;
	printf("BASE\n");
	while (i <= 16)
	{
		year_return = ft_atoi_base(year_based, i);
		printf("Base: [%d]: %d\n", i, year_return);
		i++;
	}
	return (0);
}*/
