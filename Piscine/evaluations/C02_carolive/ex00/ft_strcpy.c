/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:39:26 by carolive          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:52 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include <stdio.h>

int     main(void)
{
    char    *src;
    char    dest[5];

    src = "carlos";
    printf("antes destino: %s\n", dest);
    printf("antes source: %s\n", src);
    ft_strcpy(dest, src);
    printf("depois destino: %s\n", dest);
    printf("depois source: %s\n", src);
} */
