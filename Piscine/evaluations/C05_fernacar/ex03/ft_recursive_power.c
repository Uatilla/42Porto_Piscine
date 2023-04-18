/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:36:18 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/20 20:23:07 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
 #include <stdio.h>
 int main(){
 	printf("%d\n", ft_recursive_power(2, 1));
 }
