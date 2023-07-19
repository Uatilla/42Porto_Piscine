/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:12:46 by uviana-a          #+#    #+#             */
/*   Updated: 2023/07/19 20:42:51 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	if (src == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0' || dest[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		if (dest[i])
			dest[i] = '\0';
	}
	return (dest);
}
/*
int main()
{
    char    *src =  "Hello";
    char    dest[6] = "World!";

    printf("dest_result: %s\n", strcpy(dest, src));
    return (0);
}*/
