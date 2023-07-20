/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:58:47 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/20 20:09:57 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	else
	{
		while (str[i])
			i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
