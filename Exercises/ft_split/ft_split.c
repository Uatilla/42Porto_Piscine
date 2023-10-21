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

int	check_word(char *str)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] && str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i - 1] == 32 || str[i - 1] == '\t' || str[i - 1] == '\n')
				word_started = 1;
		}
		else
		{
			if (
		}
		i++;
	}
	return (words);
	
}

char	**ft_split(char *str)
{
	//1) Count Words:
	int	wrd_count;

	wrd_count = check_word(text);
}

int	main()
{
	char	*text = "  Uatilla Viana Almeida";
	char	**splitted;

	splitted = ft_split(text);
	return (0);
}
