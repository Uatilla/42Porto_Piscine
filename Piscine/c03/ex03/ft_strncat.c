/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:28:26 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/21 11:07:34 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0' && a < nb)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	int	index;
	char	str1[30] = "We shall go";
	char	str2[30] = " to the end";
	
	index = 2;
	ft_strncat(str1, str2, index);
	return (0);
}*/
