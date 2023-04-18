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
	int	j;

	i = 0;
	j = 0;
	if (to_find [0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && (str[i + j] != '\0'))
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
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
