/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmenezes <rmenezes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 21:36:34 by rmenezes          #+#    #+#             */
/*   Updated: 2023/03/13 22:39:03 by rmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	short	i;

	i = 48;
	while (i <= 57)
	{
		write (1, &i, 2);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
return(0);
}
