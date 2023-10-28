/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:45:18 by uviana-a          #+#    #+#             */
/*   Updated: 2023/10/21 19:45:20 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen_mod(int start, char *str)
{
	while (str[start] && str[start] != '\0' 
		&& str[start] != 32 && str[start] != '\t' && str[start] != '\n')
		start++;
	return (start);
}

char	*ft_splitted(char *str, int start_index, int size)
{
	char	*word_splitted;
	int		i;

	word_splitted = malloc (sizeof(char *) * size);
	if (!word_splitted)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word_splitted[i] = str[start_index + i];
		i++;
	}
	word_splitted[i] = '\0';
	return (word_splitted);
}

void	ft_fill_split(char **str_split, char *str)
{
	int	i;
	int	st_idx;
	int	e_idx;
	int	j;

	i = -1;
	j = 0;
	while (str[++i] && str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			;
		else if ((str[i] != 32 || str[i] != '\n' || str[i] != '\t')
			&& (i == 0 || str[i - 1] == 32 || str[i - 1] == '\n' 
				|| str[i - 1] == '\t'))
		{
			st_idx = i;
			e_idx = ft_strlen_mod(st_idx, str);
			str_split[j] = ft_splitted(str, st_idx, e_idx - st_idx + 1);
			j++;
		}
	}
}

int	check_word(char *str)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] && str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
			i++;
		else if ((str[i] != 32 || str[i] != '\n' || str[i] != '\t') 
			&& (i == 0 || str[i - 1] == 32 || str[i - 1] == '\n' 
				|| str[i - 1] == '\t'))
		{
			words++;
			i++;
		}
		else
			i++;
	}
	return (words);
}

char	**ft_split(char *str)
{
	int		words;
	char	**ptr_split;

	words = check_word(str);
	ptr_split = malloc(sizeof(char *) * (words + 1));
	if (!ptr_split)
		return (NULL);
	ft_fill_split(ptr_split, str);
	return (ptr_split);
}
/*
int	main(void)
{
	char	*text = "  Uatilla Viana    Almeida    ";
	char	**splitted;
	int	i;

	i = 0;
	splitted = ft_split(text);
	while (splitted[i] && splitted[i] != (void *)0)
	{
		printf("[%d] %s\n", i, splitted[i]);
		i++;
	}
	return (0);
}*/
