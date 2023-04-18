/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:32:31 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:12:58 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main(void)
{
	char string[] = "12as3";
	printf("%d", ft_str_is_lowercase(string));
}*/
