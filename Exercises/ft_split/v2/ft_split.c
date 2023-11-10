/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:15:42 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/09 09:15:44 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen_mod(char const *str, int start)
{
	int	end;

	end = 0;
	while (str[start] && str[start] != '\0' && (str[start] != 32 && str[start] != '\t' && str[start] != '\n'))
	{
		start++;	
		end++;
	}
	return (end);
}

int	ft_count_words(char const *str_orig)
{
	int	qty_words;
	int	trigger;
	char const	*str;

	qty_words = 0;
	trigger = 1;
	str = str_orig;
	while (*str)
	{
		if (*str == 32 || *str == '\n' || *str == '\t')
			trigger = 1;
		else if (trigger == 1 && (*str != 32 || *str != '\t' || *str != '\n'))
		{
			trigger = 0;
			qty_words++;
		}
		str++;
	}
	return (qty_words);
}

char	*get_word(char const *str, int start, int end)
{
	char	*word;
	int	i;
	int	len;

	i = 0;
	len = end - start + 1;
	word = malloc (sizeof(char) * (len));
	if (!word)
		return (NULL);
	while (i < (len))
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	
	return (word);
}

void	ft_fill_split(char const **str_to_return, char const *str)
{
	int		trigger;
	int		len_word;
	int		i;
	int		j;
	int		start;
	//int		end;

	trigger = 1;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == 32 || str[i] == '\n' || str[i] == '\t')
			trigger == 1;
		else if (trigger = 1 && (str[i] != 32 || str[i] != '\n' || str[i] != '\t'))
		{
			start = i;
			len_word = ft_strlen_mod(str, start) - 1;
			i = i + len_word;
			str_to_return[j] = get_word(str, start, i);
			j++;
		}
		i++;
	}
	str_to_return[j] = NULL;
}

char	**ft_split(char const *str)
{
	/*1) How much words?*/
	int	wrd_qty;
	char const	**str_returned;

	wrd_qty = ft_count_words(str);
	str_returned = malloc (sizeof(char *) * (wrd_qty + 1));
	if (!str_returned)
		return (NULL);
	
	
	/*2) Fill the space with each word*/
	ft_fill_split(str_returned, str);
	return ((char **)str_returned);
}

int	main(int argc, char **argv)
{
	char	**str_returned;
	int	i;
		
	i = 0;
	str_returned = ft_split(argv[1]);
	while (str_returned[i])
	{
		printf("String [%d]: %s\n", i, str_returned[i]);
		i++;
	}
	return (0);
}
