/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:46:41 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/14 11:46:50 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	start;
	int	trigger;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == 32 || argv[1][i] == '\t')
				i--;
			end = i;
			while (argv[1][i] && argv[1][i] != 32 && argv[1][i] != '\t' && argv[1][i] != '\0')
				i--;
			start = i + 1;
			trigger = start;
			while (start <= end)
			{
				write (1, &argv[1][start], 1);
				start++;
			}
			if (trigger != 0)
				write (1, " ", 1);			
		}
	}
	write (1, "\n", 1);	
	return (0);
}
