/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:14:45 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/25 14:46:50 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dest = (char *) malloc(i * (sizeof(char) + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0' ;
		return (dest);
	}
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}
