/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:00:41 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/17 11:00:47 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((str[i - 1] == 32) || (i == 0))
			{
				str[i] = str[i] - 32;
			}
			if ((str[i - 1] == '+') || (str[i - 1] == '-'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	test[] = "ola, tudo bem? 42palAVRAS quarenta-e-duas; cinquenta+e+um";
	//char	only_upper[] = "UATI-LLA";
	//char	mixed[] = "Ua1)TiLla";
	//char	empty[10] = {'\0'};
	
	printf("Before_program: %s\n",test);
	ft_strcapitalize(test);
	printf("After_program: %s\n",test);
	
	return(0);
}*/
