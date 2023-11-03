/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:49:30 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/31 21:49:31 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str, int i)
{
	while (str[i] && str[i] != '\0')
		i++;
	return (i);
}

int	ft_skip_empty(char *str, int c_pos)
{
	while (str[c_pos] && (str[c_pos] == 32 || str[c_pos] == '\t'))
		c_pos++;
	return (c_pos);
}

int	ft_last(char *str, int c_pos)
{
	while (str[c_pos] && str[c_pos] != 32)
		c_pos++;
	return (c_pos);
}

void	print_phrase(char *str, int c_pos)
{
	int	trigger;

	trigger = 0;
	while (str[c_pos] && str[c_pos] != '\0')
	{
		c_pos = ft_skip_empty(str, c_pos);
		if (trigger == 1 && str[c_pos] != 32 && str[c_pos])
		{
			write(1, " ", 1);
			trigger = 0;
		}
		while (str[c_pos] && str[c_pos] != 32 && str[c_pos] != '\0')
		{
			write(1, &str[c_pos], 1);
			c_pos++;
			trigger = 1;
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		pos;
	char		*first_word;

	i = 0;
	pos = 0;
	if (argc > 2)
		write(1, *&argv[1], ft_strlen(argv[1]));
	else if (argc == 2)
	{
		i = ft_skip_empty(argv[1], i);
		j = ft_last(argv[1], i);
		first_word = malloc((sizeof(char)) * (j - i + 1));
		if (!first_word)
			return (0);
		while (i < j)
		{
			first_word[pos] = argv[1][i];
			i++;
			pos++;
		}
		first_word[pos] = '\0';
		print_phrase(argv[1], i);
		i = -1;
		write(1, " ", 1);
		while (first_word[++i])
			write(1, &first_word[i], 1);
		free(first_word);	
	}
	write(1, "\n", 1);
	return (0);
}
