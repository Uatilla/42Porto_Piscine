/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:17:16 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/16 17:17:18 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	only_number[] = "012345";
	char	with_letter[] = "1235x1";
	char	empty[10] = {'\0'};
	ft_str_is_numeric(only_number);
	ft_str_is_numeric(with_letter);
	ft_str_is_numeric(empty);
	return(0);
}*/
