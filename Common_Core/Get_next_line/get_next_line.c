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

char *get_next_line(int fd)
{
    int bytes_read;
    char    *buffer;
    //static char *line_cleaner;

    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    bytes_read = 1;
    while (bytes_read >= 1)
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        printf("line: %s bytes_read: %d\n", buffer, bytes_read);
        if (bytes_read == -1)
            return (NULL);
        //Clean the buffer
        while (*buffer)
        {
            if (*buffer == "\n")
                //Insert the content of buffer inside the line_cleaner variable until this position where it finds the "\n".
            buffer++;
        }
        //insert the content of buffer inside line_cleaner variable.
        //line_cleaner = strjoin(line_cleaner, buffer);
    }
    return(buffer);
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
