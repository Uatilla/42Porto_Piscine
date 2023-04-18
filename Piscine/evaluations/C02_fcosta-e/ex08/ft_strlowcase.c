/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:46:20 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 21:10:58 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			i++;
		}
		else
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
/*int	main()
{
	char	a[] = "42 TE aMo";
	ft_strlowcase(a);
}*/
