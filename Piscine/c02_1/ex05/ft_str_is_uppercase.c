/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:38:05 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/16 17:38:08 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	only_upper_letters[] = "Z";
	char	with_special[] = "abc+;x1";
	char	empty[10] = {'\0'};
	ft_str_is_uppercase(only_upper_letters);
	ft_str_is_uppercase(with_special);
	ft_str_is_uppercase(empty);
	return(0);
}*/
