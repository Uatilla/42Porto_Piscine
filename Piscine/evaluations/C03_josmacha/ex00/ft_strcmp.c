/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josmacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:02:40 by josmacha          #+#    #+#             */
/*   Updated: 2023/03/20 12:02:53 by josmacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main() 
{
	char	*str1 = "95xa/s2=45";
	char	*str2 = "955xa/s2=45";
	printf("Strcmp: %d\n",strcmp(str1, str2));
	printf("Strcmp: %d\n",ft_strcmp(str1, str2));
 

  return 0;
}
