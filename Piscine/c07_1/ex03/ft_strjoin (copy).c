/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:45:34 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/29 10:45:36 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + (ft_strlen(sep) * (size - 1));
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_join;
	int		i;
	int		j;

	if (size <= 0)
	{
		str_join = (char *)malloc(sizeof(char));
		return (str_join);
	}
	str_join = (char *)malloc((total_len(size, strs, sep) + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (str_join == NULL)
		return (NULL);
	else if (str_join == 0)
		return (0);
	while (i < size)
	{
		ft_strcat(str_join, strs[i]);
		if (j < size - 1)
			ft_strcat(str_join, sep);
		j++;
		i++;
	}
	return (str_join);
}
/*
int	main()
{
	char *strings[] = {"We", "shall", "fight"};
	char *separator = " ";
	char *result;
	
	result = ft_strjoin(3, strings, separator);
	if (result == NULL)
	{
		printf("Error on memory allocation.\n");
		return (1);
	}
	else
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
