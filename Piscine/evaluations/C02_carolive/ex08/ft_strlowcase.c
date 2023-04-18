/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:17:13 by carolive          #+#    #+#             */
/*   Updated: 2023/03/21 21:22:47 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i += 1;
	}
	return (str);
}
/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1_low: %s\n", str1);
	printf("str2_low: %s\n", str2);
	printf("str3_low: %s\n", str3);
	return (0);
} */
