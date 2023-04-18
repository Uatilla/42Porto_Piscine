/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:42:02 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 21:02:04 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
int	main(void)
{
	char	start[] = "mundo";
	char	end[] = "Teste";
	int	index = 3;

	printf("%s -> %s\n", start, end);
	ft_strncpy(end, start, index);
	printf("%s -> %s", start, end);
	//printf("\n%d", strcmp(start, end));
}
