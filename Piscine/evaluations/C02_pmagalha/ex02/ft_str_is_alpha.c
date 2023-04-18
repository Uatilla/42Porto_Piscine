/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:03:03 by pmagalha          #+#    #+#             */
/*   Updated: 2023/03/15 11:11:33 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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

	printf("%d", ft_str_is_alpha("abc"));
	printf("%d", ft_str_is_alpha("ABC"));
	printf("%d", ft_str_is_alpha("12abc45"));
	printf("%d", ft_str_is_alpha("12357"));
	printf("%d", ft_str_is_alpha(""));

}
*/
