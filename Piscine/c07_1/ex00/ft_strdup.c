/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:08:12 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/28 15:08:13 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*psrc;

	psrc = (char *) malloc(ft_strlen(src) * sizeof(char));
	i = 0;
	if (psrc == NULL)
	{
		return (NULL);
	}
	else
	{
		while (src[i] != '\0')
		{
			psrc[i] = src[i];
			i++;
		}
		psrc[i] = '\0';
		return (psrc);
	}
}
/*
int	main()
{
	char *string;
	
	string = "We shall fight";
	printf("%s\n",ft_strdup(string));
	return (0);
}*/
