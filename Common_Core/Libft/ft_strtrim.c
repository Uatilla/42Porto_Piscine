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

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t start_index;
    size_t end_index;
    size_t size;
    char *ptr_strtrim;

    i = 0;
    j = 0;
    start_index = 0;
    while (s1[i] != '\0' || i < ft_strlen(set))
    {
        while (set[j] != '\0')
        {
            if (set[j] == s1[i])
            {
                printf("S[%ld][%c] - Set[%ld][%c]\n", i, s1[i], j, set[j]);
                start_index++;
                i++;               
                j = 0;
            }
            else
            {
                j++;
            }
        }
        
        i++;
    }
    printf("start_index: %ld [%c]\n", start_index, s1[start_index]);
    end_index = ft_strlen(s1) - 1;
    i = 0;
    j = 0;
    while (i < ft_strlen(set))
    {
        while (set[j] != '\0')
        {
            if (set[j] == s1[end_index])
            {
                printf("S[%ld][%c] - Set[%ld][%c]\n", end_index, s1[end_index], j, set[j]);
                j = 0;
                end_index--;
                i++;
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    printf("end_index: %ld[%c]\n", end_index, s1[end_index]);
    size = end_index - start_index + 1;
    ptr_strtrim = ft_substr(s1, start_index, size);
    printf("ptr_strtrim: %s\n", ptr_strtrim);

    return (0);
}

int main()
{
    char    *str_strtrim = "aaaaaaaaaa uma vez era";  
    char    *rem = "a";
    ft_strtrim(str_strtrim, rem);
    return (0);
}
