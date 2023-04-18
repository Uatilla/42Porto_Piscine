/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:46:22 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:15:19 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d",ft_str_is_printable("abc"));
	printf("%d",ft_str_is_printable("ABC"));
	printf("%d",ft_str_is_printable("123"));
	printf("%d",ft_str_is_printable(""));
	printf("%d",ft_str_is_printable("üé"));
}*/
