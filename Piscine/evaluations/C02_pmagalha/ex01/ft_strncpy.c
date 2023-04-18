/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:05:15 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:10:44 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
int	main(void)
{
	int size;
	char start[] = "abcd";
	char destino[] = "gfedcba";
	size = 10;


	printf("Before %s is %s\n", start, destino);
       	ft_strncpy(destino, start, size);
	printf("After %s is %s", start, destino);
}
