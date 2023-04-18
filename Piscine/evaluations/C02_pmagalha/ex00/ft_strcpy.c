/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 08:35:50 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:08:29 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
int	main(void)
{
	char	start[] = "teste";
	char	destino[] = "Oi";

	printf("%s -> %s\n", start, destino);
	ft_strcpy(destino, start);
	printf("%s -> %s", start, destino);
}
