/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:27:03 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:19:29 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	alphanum(char b)
{
	if ((b >= 'a' && b <= 'z')
		|| (b >= 'A' && b <= 'Z')
		|| (b >= '0' && b <= '9')
		|| (b >= 'a' && b <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] == '\0')
	{
		if (alphanum(str[i]) && !alphanum(str[i - 1])
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] + 32;
		}
		if (alphanum(str[i]) && alphanum(str[i -1])
			&& (str[i] >= 'A' && str[i] <= 'Z'))
		{
		str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
/*int	main(void)
{

	char stringue[] = "ola, Este Exercicio eh D1ficil d+Eheheh";
	printf("%s", ft_strcapitalize(stringue));
}*/
