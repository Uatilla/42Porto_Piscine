/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:37:40 by tiaferna          #+#    #+#             */
/*   Updated: 2023/03/13 17:36:12 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int		num;

	num = 97;
	while (num <= 122)
	{
		c = (char)num;
		write(1, &c, 1);
		num++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/
