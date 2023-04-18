/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:56:17 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/17 10:56:18 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	only_lower[] = "uatilla";
	char	only_upper[] = "UATI-LLA";
	char	mixed[] = "Ua1)TiLla";
	char	empty[10] = {'\0'};
	
	printf("Before_ol: %s\n",only_lower);
	ft_strlowcase(only_lower);
	printf("After_ol: %s\n",only_lower);
	printf("Before_ou: %s\n",only_upper);
	ft_strlowcase(only_upper);
	printf("After_ou: %s\n",only_upper);
	printf("Before_mx: %s\n",mixed);
	ft_strlowcase(mixed);	
	printf("After_mx: %s\n",mixed);
	printf("Before_em: %s\n",empty);
	ft_strlowcase(empty);
	printf("After_em: %s\n",empty);
	
	return(0);
}*/
