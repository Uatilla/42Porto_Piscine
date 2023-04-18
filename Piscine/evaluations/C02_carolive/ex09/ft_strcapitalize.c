/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:21:39 by carolive          #+#    #+#             */
/*   Updated: 2023/03/21 15:54:44 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 1;
	a = alpha(str[0]);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		a = alpha(str[i - 1]);
		if (a == 1 && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else if (a == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i += 1;
	}
	return (str);
}
 #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str1[] = "ola, tudo bem? 42palavras quare/nta-e-duas; cinquenta+e+um";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	return (0);
}
