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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i]) != '\0' || (unsigned char)c == '\0')//verificar essa condição
	{
		if ((s[i]) == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*ptr_strjoin;
	size_t	i;
	size_t	j;

	ptr_strjoin = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr_strjoin)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		((char *)ptr_strjoin)[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		((char *)ptr_strjoin)[i] = s2[j];
		i++;
		j++;
	}
	((char *)ptr_strjoin)[i] = '\0';
	return ((char *)ptr_strjoin);
}

/*-------------------------------------------------------------*/

char *ft_get_content(int fd, char *line_cleaner)
{
    char    *buffer_content;
    int     bytes_read;

    buffer_content = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buffer_content)
        return (NULL);
    bytes_read = 1;
    //while (!ft_strchr(line_cleaner, '\n') && bytes_read != 0)
    while (bytes_read != 0)//In the first while loop the \n will be find and the while loop will not run a second time?
    {
        bytes_read = read(fd, buffer_content, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free (buffer_content);
            free (line_cleaner);
            return (NULL);
        }
        buffer_content[bytes_read] = '\0';
        line_cleaner = ft_strjoin(line_cleaner, buffer_content);
    }
    free (buffer_content);
    return (line_cleaner);
}

char *get_next_line(int fd)
{
    static char    *line_cleaner;

    line_cleaner = "";// The string must be initialized because when running ft_strjoin inside the ft_get_content, it will return an error.
    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    line_cleaner = ft_get_content(fd, line_cleaner);
    printf("line_cleaner: %s\n", line_cleaner);
    return (line_cleaner);
}
int main()
{
    int fd;
    char    *file;

    file = "test.txt";
    fd = open(file, O_RDONLY);
    //If the file was not opened properly or the file didn't exist.
    if (fd == -1)
    {
        printf("ERROR: the file couldn't be opened!\n");
        return (1);
    }
    get_next_line(fd);
    close(fd);
    return (0);
}
