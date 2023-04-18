/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:20:35 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/22 17:02:54 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = sign * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str < '0' || *str > '9')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/*
int main ()
{
    char str1[] = "1 23";
    char str2[] = "-456";
    char str3[] = "    789";
    char str4[] = "abc123";
    char str5[] = "123xyz";
    char str6[] = "-2147483648";
    char str7[] = "2147483647";
    char str8[] = "2147483648";

    int result1 = ft_atoi(str1);
    int result2 = ft_atoi(str2);
    int result3 = ft_atoi(str3);
    int result4 = ft_atoi(str4);
    int result5 = ft_atoi(str5);
    int result6 = ft_atoi(str6);
    int result7 = ft_atoi(str7);
    int result8 = ft_atoi(str8);

    printf("Input: %s, Result: %d\n", str1, result1);
    printf("Input: %s, Result: %d\n", str2, result2);
    printf("Input: %s, Result: %d\n", str3, result3);
    printf("Input: %s, Result: %d\n", str4, result4);
    printf("Input: %s, Result: %d\n", str5, result5);
    printf("Input: %s, Result: %d\n", str6, result6);
    printf("Input: %s, Result: %d\n", str7, result7);
    printf("Input: %s, Result: %d\n", str8, result8);

    return 0;
}*/
