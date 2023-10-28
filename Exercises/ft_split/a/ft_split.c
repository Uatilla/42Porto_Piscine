/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:25:57 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/24 16:25:59 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\0')
		i++;
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

static	int	ft_strlen_mod(const char *string, char search, int start_index)
{
	int	i;

	i = start_index;
	while (string[i + 1] != search && string[i + 1] != '\0')
	{
		i++;
	}
	return (i);
}

static	int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		else if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			words++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

static	void	ft_fill_split(char const *s, char c, char **ptr_split)
{
	int	i;
	int	j;
	int	start_index;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			start_index = i;
			i = ft_strlen_mod(s, c, i);
			ptr_split[j] = ft_substr(s, start_index, (i - start_index + 1));
			j++;
			i++;
		}
	}
	ptr_split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_split;

	if (!s)
		return (NULL);
	/*1) Count how many words you will need and malloc a memory for this amount
	plus the last element (NULL)*/
	ptr_split = malloc (sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ptr_split)
		return (NULL);
	/*2) When filling the*/
	ft_fill_split(s, c, ptr_split);
	return (ptr_split);
}

int	main(int argc, char **argv)
{
	char **test;
	char	sep;
	int	i;

	i = 0;
	sep = 32;
	test = ft_split(argv[1], sep);
	while (test[i] && test[i] != (void *)0)
	{
		printf("[%d] %s\n", i, test[i]);
		i++;
	}
	return (0);
}
