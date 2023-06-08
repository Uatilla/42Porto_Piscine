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

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char *ft_get_content(int fd, char *line_cleaner)
{
    char    *buffer_content;
    int     bytes_read;

    buffer_content = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buffer_content)
        return (NULL);
    bytes_read = 1;
    while (bytes_read != 0)//In the first while loop the \n will be find and the while loop will not run?
    {
        bytes_read = read(fd, buffer_content, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free (buffer_content);
            free (line_cleaner);
            return (NULL);
        }
        line_cleaner[bytes_read] = '\0';
    }
    free (buffer_content);
    return (line_cleaner);
}

char *get_next_line(int fd)
{
    static char    *line_cleaner;

    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    line_cleaner = ft_get_content(fd, line_cleaner);
    printf("line)cleaner: %s\n", line_cleaner);
    return ("a");
}
int main()
{
    int fd;
    char    *file;

    file = "test.txt";
    fd = open(file, O_RDONLY);
    //If the file was not opened properly.
    if (fd == -1)
    {
        printf("ERROR: the file couldn't be opened!\n");
        return (1);
    }
    get_next_line(fd);
    //get_next_line(fd);
    close(fd);
    return (0);
}
