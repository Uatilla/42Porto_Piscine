/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:09:35 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 09:54:44 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
	char	only_alpha[] = "onlyalpha";
	char	with_number[] = "[caaaaaaa*x1";
	char	empty[10] = {'\0'};
	printf("%d", ft_str_is_alpha(only_alpha));
	printf("%d", ft_str_is_alpha(with_number));
	printf("%d", ft_str_is_alpha(empty));
	return(0);
}
