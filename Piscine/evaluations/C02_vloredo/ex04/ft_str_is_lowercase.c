/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloredo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:01:28 by vloredo-          #+#    #+#             */
/*   Updated: 2023/03/21 14:34:13 by vloredo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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

/*int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcd"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("abCD12"));
	printf("%d\n", ft_str_is_lowercase(" 12Cbcd"));
}*/
