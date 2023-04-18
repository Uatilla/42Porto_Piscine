/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:55:24 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/20 20:55:25 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
	return (0);
}
/*
int	main()
{
	char	src[20] = "0000$a";
	char	dest[20] = "00001z";
	int	index;
	int	result;
	
	index = 5;
	
	result = strncmp(src, dest, index);
	printf("strncmp: %d\n", result);
	ft_strncmp(src, dest, index);
	return (0);
}*/
