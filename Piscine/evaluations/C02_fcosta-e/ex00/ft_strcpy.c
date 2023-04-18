/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:29:49 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 20:59:43 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
	char	start[] = "mundo";
	char	destino[] = "Teste";

	printf("%s -> %s\n", start, destino);
	ft_strcpy(destino, start);
	printf("%s -> %s", start, destino);
}
