/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:15:53 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 21:14:21 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main()
{
	unsigned int	size = 3;
	char	atual[] = "42te amo";
	char	nova[3];
	printf("%d",ft_strlcpy(nova, atual, size));
}
