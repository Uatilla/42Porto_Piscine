/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 22:31:22 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/21 22:31:29 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && n - 1)
	{
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int	main()
{
	char	src[20] = "0000$a";
	char	dest[20] = "00001z";
	int	index;
	int	result;
	
	index = 5;
	
	result = strncmp(src, dest, index);
	printf("strncmp: %d\n", result);
	ft_strncmp(src, dest, index);
	printf("%d\n",strncmp(src, dest, index));
	return (0);
}
