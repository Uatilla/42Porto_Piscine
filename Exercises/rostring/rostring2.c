/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:05:21 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:24 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	print_words(char *str, int pos)
{
	//pos = pass_spaces(char str, pos);
	while (str[pos] != '\0' && str[pos] != 32 && str[pos] != '\t')
	{
		write (1, &str[pos], 1);
		pos++;
	}
	return (pos);
}

int	pass_spaces(char *str, int pos)
{
	while (str[pos] != '\0' && (str[pos] == '\t' || str[pos] == 32))
		pos++;
	return (pos);
}

int	ignore_fst_word(char *str, int pos)
{
	while (str[pos] != '\0' && str[pos] != 32 && str[pos] != '\t')
		pos++;
	return (pos);
}

int	main(int argc, char **argv)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 1;
	if (argc >= 2)
	{
		while (argv[1][i] && argv[1][i] != '\0')
		{
			i = pass_spaces(argv[1], i);
			if (trigger == 1)
			{
				i = ignore_fst_word(argv[1], i);
				trigger = 0;
			}
			else
				i = print_words(argv[1], i);
			
		}
		//i = 0;
		i = pass_spaces(argv[1], 0);
		i = print_words(argv[1], i);
		/* in print letters if I find a space I need to activate a trigger and prints the 
		space if i find another word.*/
		/*After that I need to print the first word until i find the first space
		or end line or tab*/
		//i = 0;
		//i = print_letters(argv[1], 0);
	}
	write (1, "\n", 1);
	return (0);
}
