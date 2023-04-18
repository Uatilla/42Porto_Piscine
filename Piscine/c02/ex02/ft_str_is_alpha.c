/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:39:33 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/16 14:39:36 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'z') || (str[i] < 'a' && str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*

int	main()
{
	char	only_alpha[] = "onlyalpha";
	char	with_number[] = "[caaaaaaa*x1";
	char	empty[10] = {'\0'};
	ft_str_is_alpha(only_alpha);
	ft_str_is_alpha(with_number);
	ft_str_is_alpha(empty);
	return(0);
}*/
