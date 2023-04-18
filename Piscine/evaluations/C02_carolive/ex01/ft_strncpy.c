/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:09:17 by carolive          #+#    #+#             */
/*   Updated: 2023/03/21 21:16:35 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
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
    ft_strncpy(dest, src, 2);
    printf("depois destino: %s\n", dest);
    printf("depois source: %s\n", src);

} */
