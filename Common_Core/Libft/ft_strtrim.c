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

static	int	get_start_index(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start_index;

	i = 0;
	j = 0;
	start_index = 0;
	while (s1[i] != '\0' || i < ft_strlen(set))
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
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
	return (start_index);
}

static	int	get_end_index(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	end_index;

	i = 0;
	j = 0;
	end_index = ft_strlen(s1) - 1;
	while (i < ft_strlen(set))
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[end_index])
			{
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
	return (end_index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start_index;
	size_t		end_index;
	char		*ptr_strtrim;

	start_index = get_start_index(s1, set);
	end_index = get_end_index(s1, set);
	ptr_strtrim = ft_substr(s1, start_index, (end_index - start_index + 1));
	return (ptr_strtrim);
}
