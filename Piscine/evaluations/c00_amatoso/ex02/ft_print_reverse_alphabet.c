/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatoso <amatoso@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:05:35 by amatoso           #+#    #+#             */
/*   Updated: 2023/03/18 12:58:25 by amatoso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	txt;

	txt = 122;
	while (txt >= 97)
	{
		write (1, &txt, 1);
		txt--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
