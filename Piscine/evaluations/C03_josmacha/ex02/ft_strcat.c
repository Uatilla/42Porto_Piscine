/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 23:40:16 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/21 23:40:40 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}
