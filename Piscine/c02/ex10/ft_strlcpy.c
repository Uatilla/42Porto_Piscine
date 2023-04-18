/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:00:41 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/20 09:43:50 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void copy_string(char *dest, const char *src, size_t dest_size)
{
	int len;
	len = strlcpy(dest, src, dest_size);
	printf("Copied string: %s\n", dest);
}

int main()
{
    char dest[10];
    const char *src = "Hello";
    int max_size = 10;
    
    copy_string(dest, src, max_size);

    return(0);
}
