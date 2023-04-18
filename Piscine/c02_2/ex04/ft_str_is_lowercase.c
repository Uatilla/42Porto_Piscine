/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:30:57 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/16 17:30:59 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	only_small_letters[] = "z";
	char	with_special[] = "abc+;x1";
	char	empty[10] = {'\0'};
	ft_str_is_lowercase(only_small_letters);
	ft_str_is_lowercase(with_special);
	ft_str_is_lowercase(empty);
	return(0);
}*/
