/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:49:13 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/21 23:49:15 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest)
	{
		dest++;
	}
	while (*src && nb)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	return (dest);
}

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int nb = 4;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
