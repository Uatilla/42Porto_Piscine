/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:13:58 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 09:56:47 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
    char *str1 = "12";
    printf("%d", ft_str_is_numeric(str1));
}*/
