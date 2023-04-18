/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloredo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:55:02 by vloredo-          #+#    #+#             */
/*   Updated: 2023/03/21 18:49:34 by vloredo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main()
{
	printf("%d\n", ft_str_is_numeric("12345"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric(" a74"));
	printf("%d\n", ft_str_is_numeric("ahhs74"));
}*/
