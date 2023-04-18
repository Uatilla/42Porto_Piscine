/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierdos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:26:38 by dierdos-          #+#    #+#             */
/*   Updated: 2023/03/22 16:58:21 by dierdos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char str1[] = "lima0b";
	char str2[] = "lima2a";
	printf("%d", ft_strncmp(str1, str2, 6));
	printf("%d", ft_strncmp(str1, str2, 6));
}
