/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:45:04 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/19 19:45:06 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				c = 122 - (argv[1][i] - 97);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				c = 90 - (argv[1][i] - 65);
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
