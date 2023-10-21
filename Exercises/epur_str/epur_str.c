/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:23:18 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/19 20:23:20 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_spc(char *str, int i, int space)
{
	if (str[i] == 32)
	{
		if (str[i - 1] && str[i - 1] != 32)
			space = 1;
	}
	else
	{
		if (space == 1)
			write (1, " ", 1);
		space = 0;
		write(1, &str[i], 1);
	}
	return (space);
}

int	main(int argc, char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (argc == 2)
	{
		while (argv[1][i] && argv[1][i] != '\0')
		{
			space = check_spc(argv[1], i, space);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
