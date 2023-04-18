/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 09:23:39 by avasques          #+#    #+#             */
/*   Updated: 2023/03/20 10:01:08 by avasques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
    char *str1 = "";
    printf("%d", ft_str_is_printable(str1));
}*/
