/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:13:13 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/21 19:13:17 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	a = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[a] && i < size - 1)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*
int				main(void)
{
	char			dest[50] = "AA";
	char			src[50] = "XY";
	unsigned int	size;

	size = 4;
	//printf("%d\n", strlcat(dest, src, size));
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}*/
