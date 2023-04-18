/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:22:37 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 09:59:37 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
    char *str1 = "ASDGA";
    printf("%d", ft_str_is_uppercase(str1));
}*/
