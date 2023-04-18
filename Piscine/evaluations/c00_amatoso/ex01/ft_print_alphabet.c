/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatoso <amatoso@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 10:56:21 by amatoso           #+#    #+#             */
/*   Updated: 2023/03/18 11:04:27 by amatoso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	t;

	t = 'a';
	while (t <= 'z')
	{
		write(1, &t, 1);
		t++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
