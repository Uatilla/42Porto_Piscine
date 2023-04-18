/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:00:41 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/20 09:43:50 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i <= size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (i);
}
//int main ()
//{
//	char dfg[] = "Isto 'e bom";//11
//	char src[] = "Isto e mentira'";//15
//	printf("%d, %s", ft_strlcpy(dfg, src, 15), dfg);
//	char dest[] = "Isto e mentira'";
//	printf("\n%d", strcmp(src, dest));
//	return(0);
//}
