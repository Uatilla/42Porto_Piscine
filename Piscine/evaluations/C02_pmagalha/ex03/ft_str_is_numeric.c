/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:40:21 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:12:19 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
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
	printf("%d", ft_str_is_numeric("abc"));
        printf("%d", ft_str_is_numeric("ABC"));
        printf("%d", ft_str_is_numeric("12abc45"));
        printf("%d", ft_str_is_numeric("12357"));
	printf("%d", ft_str_is_numeric(""));
}*/
