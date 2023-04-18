/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:07:01 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 09:52:38 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
		if (i >= n)
		{
		dest[i] = '\0';
		}
	i++;
	}
	return (dest);
}

int main ()
{
  char dest1[16] = {0};
  char *src1 = "Hello";
  unsigned int n1 = 20;

  ft_strncpy (dest1, src1, n1);
  
  printf("String = %s", dest1);
}
