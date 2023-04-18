/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:00:30 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/16 13:00:33 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	start[] = "mundo";
	char	end[] = "Teste";
	int	index = 3;

	printf("%s -> %s\n", start, end);
	ft_strncpy(end, start, index);
	printf("%s -> %s", start, end);
	printf("\n%d", strcmp(start, end));
}
