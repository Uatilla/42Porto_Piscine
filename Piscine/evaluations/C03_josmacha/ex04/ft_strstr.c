/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:12:42 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/22 00:12:45 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		i2 = 0;
		while (to_find[i2] == str[i])
		{
			i2++;
			i++;
			if (to_find[i2] == '\0')
				return (&str[i - i2]);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	*str;
	char	*to_find;

	str = "Bonjour les chacaux";
	to_find = "lles";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "onj";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = " l";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	to_find = "x";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}

