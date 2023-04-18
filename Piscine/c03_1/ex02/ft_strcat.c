/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:22:13 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/20 22:22:20 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char str1[30] = "We shall go ";
	char str2[30] = "to the end";
	
	// Calling the new function:
	//ft_strcat(str1, str2);
	printf("%s",ft_strcat(str1, str2));
	
	
	return (0);
}*/
