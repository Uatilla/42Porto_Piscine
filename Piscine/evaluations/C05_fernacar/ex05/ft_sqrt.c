/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 01:15:31 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/20 20:38:04 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = nb;
	while (i > 0)
	{
		if ((i * i) == nb)
			break ;
		i--;
	}
	return (i);
}
 #include <stdio.h>
 int main(){
 	printf("%d\n", ft_sqrt(4));
 }
