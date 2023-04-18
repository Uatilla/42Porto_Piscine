/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:23:48 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/20 20:34:13 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	i;

	if (nb == -1)
		return (-1);
	if (nb == 1)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
	{
		if (nb >= 0)
			return (1);
		else
			return (-1);
	}
	total = 1;
	i = 0;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
 #include <stdio.h>
 #include <math.h>
 int main(){
 	printf("%d\n", ft_iterative_power(2, -2));
// 	printf("%f\n", pow(-2, -2));
 }
