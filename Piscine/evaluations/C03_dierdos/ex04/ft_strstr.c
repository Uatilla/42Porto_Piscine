/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierdos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:52:23 by dierdos-          #+#    #+#             */
/*   Updated: 2023/03/21 18:34:19 by dierdos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (&str[i]);
		i++;
		a = 0;
	}	
	return (0);
}
/*int main()
{
	char str[] = "procuro um gato chamado carlos";
	char to_find[] = "gato chamado carlos";
	printf("%s", ft_strstr(str, to_find));
}*/
