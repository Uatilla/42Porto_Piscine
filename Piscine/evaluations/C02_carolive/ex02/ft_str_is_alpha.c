/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:36:17 by carolive          #+#    #+#             */
/*   Updated: 2023/03/21 15:23:01 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;
    char *str5;

    str1 = calloc(10, sizeof(char));
    str2 = calloc(10, sizeof(char));
    str3 = calloc(10, sizeof(char));
    str4 = calloc(10, sizeof(char));
    str5 = calloc(10, sizeof(char));
    str1 = "abCdeFgHi";
    str2 = "abCde2gHi";
    str3 = "2bCde2gHi";
    str4 = "abCde2gH2";
    str5 = "";
    printf("str1: %s, is_aplha: %d\n", str1, ft_str_is_alpha(str1));
    printf("str2: %s, is_aplha: %d\n", str2, ft_str_is_alpha(str2));
    printf("str3: %s, is_aplha: %d\n", str3, ft_str_is_alpha(str3));
    printf("str4: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str4));
    printf("str5: %s, is_aplha: %d\n", str4, ft_str_is_alpha(str5));
    return (0);
} */
