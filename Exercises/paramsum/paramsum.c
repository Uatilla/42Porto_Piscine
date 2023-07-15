/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:10:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/15 17:10:20 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putnbr_v2(int num)
{
	if (num > 9)
		putnbr_v2(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 2)
		putnbr_v2(argc - 1);
	else
		write (1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
