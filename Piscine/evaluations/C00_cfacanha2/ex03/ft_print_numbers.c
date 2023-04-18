/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfacanha <cfacanha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:00:47 by cfacanha          #+#    #+#             */
/*   Updated: 2023/03/09 12:02:46 by cfacanha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
	i = i + 1;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
