/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatoso <amatoso@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:10:33 by amatoso           #+#    #+#             */
/*   Updated: 2023/03/20 17:49:40 by amatoso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0 || n == '\0')
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int	main(void)
{
	ft_is_negative(1);
	write(1, "\n", 1);
	ft_is_negative(-1);
	write(1, "\n", 1);
	ft_is_negative('\0');
	write(1, "\n", 1);
	return (0);
}
