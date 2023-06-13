/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_tools.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:13:11 by uviana-a          #+#    #+#             */
/*   Updated: 2023/06/13 14:13:12 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*ptr_substr;
	size_t	i;

	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	ptr_substr = malloc (sizeof(char) * (len + 1));
	if (!ptr_substr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		((char *)ptr_substr)[i] = s[start + i];
		i++;
	}
	((char *)ptr_substr)[i] = '\0';
	return ((char *)ptr_substr);
}

int	ft_strlen_mod2(const char *string, char search, int start_index)
{
	int	i;

	i = start_index;
	while (string[i] != search && string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr_mod(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while ((s[i]) != '\0' || (unsigned char)c == '\0')//verificar essa condição
	{
		if ((s[i]) == (unsigned char)c)
		{
			i++;
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin_mod(char *s1, char *s2)
{
	void	*ptr_strjoin;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	ptr_strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr_strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		((char *)ptr_strjoin)[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		((char *)ptr_strjoin)[i] = s2[j];
		i++;
		j++;
	}
	((char *)ptr_strjoin)[i] = '\0';
	//free(s1);
	return ((char *)ptr_strjoin);
}
