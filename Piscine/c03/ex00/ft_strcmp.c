/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:03:40 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/20 15:03:41 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	}
	return (0);
}
/*
int main() 
{
	char	*str1 = "95xa/s2=45";
	char	*str2 = "955xa/s2=45";
	//printf("Strcmp: %d\n",strcmp(str1, str2));
	ft_strcmp(*str1, *str2);
 

  return 0;
}*/
