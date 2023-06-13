/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:52:31 by uviana-a          #+#    #+#             */
/*   Updated: 2023/05/31 20:52:34 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    char    *file;
    int i = 0;
	char *test;

    file = "test.txt";
    fd = open(file, O_RDONLY);
    //If the file was not opened properly or the file didn't exist.
    if (fd == -1)
    {
        printf("ERROR: the file couldn't be opened!\n");
        return (1);
    }
	
    while (1)
	{
		test = get_next_line(fd);
		printf("[%d]teste: %s",i, test);
		if (!test)
			break;
		free(test);
        i++;
	}
    //printf("%s", get_next_line(fd));


    close(fd);
    return (0);
}

