/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:27:14 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 21:10:04 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			i++;
		}
		else
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}
/*int	main()
{
	char	a[] = "42 te amo";
	ft_strupcase(a);
}*/
