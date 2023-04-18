/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:01:44 by mcarreir          #+#    #+#             */
/*   Updated: 2023/03/13 13:09:39 by mcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		--c;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}
