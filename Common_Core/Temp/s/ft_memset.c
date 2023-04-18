/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:28:06 by fernacar          #+#    #+#             */
/*   Updated: 2023/04/11 20:34:48 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

int main() {
    char my_string[20];
    char my_string2[20];
    char    c;
    int     count;

    c = 'a';
    count = 10;

    // Use memset to set all characters in my_string to 'a'
    memset(my_string, c, count);
    memset(my_string + 10 , 'X', count);
    printf("memset: %s\n", my_string);
    
    ft_memset(my_string2, c, count);
    ft_memset(my_string2 + 10 , 'X', count);
    printf("ft_memset: %s\n", my_string2);

    return 0;
}
