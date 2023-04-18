/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:26:44 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 18:41:08 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i - 1] < 47 || (str[i - 1] > 57 && str[i - 1] < 65))
		{
			if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			
			}
		}
	i++;	
	}
	return (str);
}

int main()
{
    char str1[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s", ft_strcapitalize(str1));
}
