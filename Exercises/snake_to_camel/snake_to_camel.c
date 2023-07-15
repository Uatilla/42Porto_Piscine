/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:43:55 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/15 16:43:58 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str_snk)
{
	while (*str_snk)
	{
		if (*str_snk == '_')
		{
			str_snk++;
			if (*str_snk >= 97 && *str_snk <= 122)
				*str_snk = *str_snk - 32;
		}
		write(1, &*str_snk, 1);
		str_snk++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		snake_to_camel(argv[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
