/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:58:51 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 09:01:38 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}	
	return (dest);
}

/*int main()
{
    char dest1;
    char *src1 = "Hello";
    printf("The copied string is: %p",ft_strcpy(&dest1, src1));
}*/
