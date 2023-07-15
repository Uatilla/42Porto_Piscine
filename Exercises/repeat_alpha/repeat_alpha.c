/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:33:11 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/15 15:33:14 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *string)
{
	int	i;
	int	repeat;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 65 && string[i] <= 90)
			repeat = string[i] - 64;
		else if (string[i] >= 97 && string[i] <= 122)
			repeat = string[i] - 96;
		else
			repeat = 1;
		while (repeat > 0)
		{
			write(1, &string[i], 1);
			repeat--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
