/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:47:45 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/21 15:47:46 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return ((size_t) s1[i] - (size_t) s2[i]);
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    /*char    start;
    char    end;
    start = ft_strncmp(s1, set, ft_strlen(set));
    printf("start: %d\n", start);
    end = ft_strncmp(s1, set, (ft_strlen(s1) - ft_strlen(set)));
    printf("end: %d\n", end);*/
    i = 0;
    

    return (0);
}

int main()
{
    char    *str_strtrim = "#A42#Porto#";  
    char    *rem = "#4";
    ft_strtrim(str_strtrim, rem);
    return (0);
}
