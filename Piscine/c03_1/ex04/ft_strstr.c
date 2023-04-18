/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:23:48 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/21 11:23:49 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	address;

	i = 0;
	a = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[a] && (to_find[a] != '\0'))
		{
			if (a == 0)
				address = i;
			a++;
			i++;
		}
		a = 0;
		i++;
	}
	if (str[i] == '\0' && address == '\0')
	{
		return (0);
	}
	return (str + address);
}
/*

int main()
{
	char	str[20] = "Hello 42 Porto";
	char	check [20] = "2";
   	printf("%s\n", strstr(str,check));
	printf("%s\n", ft_strstr(str, check));
	return (0);
}*/
