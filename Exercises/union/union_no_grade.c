/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:46:37 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/03 20:46:39 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_array(int *final_print, char c)
{
	int	*array;

	array = final_print;
	while (array && *array != '\0')
	{
		if (*array == c)
			return (1);
		array++;
	}
	return (0);
}

void	ft_check_word(int *final_print, char *str, int pos)
{
	int	*array;

	array = final_print;
	while (str[pos])
	{
		if (!ft_check_array(final_print, str[pos]))
		{
			*array = str[pos];
			array++;
		}
		pos++;
	}
}

int	main(int argc, char **argv)
{
	int	word;
	int	letter;
	int	final_print[255] = {0};
	int	*array;

	array = final_print;
	if (argc == 3)
	{
		word = 1;
		//letter = 0;
		while (argv[word])
		{
			letter = 0;
			//ft_check_word(final_print, argv[word], 0);		
			
			//
			while (argv[word][letter])
			{
				if (!ft_check_array(final_print, argv[word][letter]))
				{
					*array = argv[word][letter];
					array++;
				}
				letter++;
			}
			word++;
		}
		//*array = '\0';
	}
	write (1, "\n", 1);
	printf("%ls\n", final_print);
	return (0);
}
