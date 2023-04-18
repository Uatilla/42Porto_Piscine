/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:25:22 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/20 20:12:53 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	if (nb < 0)
		return (0);
	total = 1;
	i = 1;
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(0));
}
