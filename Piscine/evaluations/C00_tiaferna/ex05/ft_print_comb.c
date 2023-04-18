/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiaferna <tiaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:31:14 by tiaferna          #+#    #+#             */
/*   Updated: 2023/03/13 18:03:39 by tiaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = '0' - 1;
	digit2 = '1' - 1;
	digit3 = '2' - 1;
	while (++digit1 <= '7')
	{
		while (++digit2 <= '8')
		{
			while (++digit3 <= '9')
			{
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (digit1 == '7' && digit2 == '8' && digit3 == '9')
					break ;
				write(1, ", ", 2);
			}
				digit3 = digit2 + 1;
		}
		digit2 = digit1;
	}
}

int main(void)
{
	ft_print_comb();
}
