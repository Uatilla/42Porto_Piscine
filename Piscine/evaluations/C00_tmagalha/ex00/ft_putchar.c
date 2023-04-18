/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmagalha <tmagalha@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:25:39 by tmagalha          #+#    #+#             */
/*   Updated: 2023/03/13 11:46:17 by tmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	char	t;

	t = 'c';
	ft_putchar (t);
	return (0);
}
*/
