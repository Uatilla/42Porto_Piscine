/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:21:18 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/18 18:28:00 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == 32 && argv[1][i])
			i++;
		len = 0;
		while (argv[1][i] != 32 && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			len++;
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
