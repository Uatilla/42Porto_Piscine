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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*ptr_substr;
	size_t	i;

	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	ptr_substr = malloc (sizeof(char) * (len + 1));
	if (!ptr_substr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		((char *)ptr_substr)[i] = s[start + i];
		i++;
	}
	((char *)ptr_substr)[i] = '\0';
	return ((char *)ptr_substr);
}

static	int	ft_strlen_mod2(const char *string, char search, int start_index)
{
	int	i;

	i = start_index;
	while (string[i] != search && string[i] != '\0')
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
char *ft_clean_line(char *line_to_clean)
{
    char    *line_cleaned;

    line_cleaned = malloc(sizeof(char) * ft_strlen_mod2(line_to_clean, '\n', 0) + 1);
    if (!line_cleaned)
        return (NULL);
    line_cleaned = ft_substr(line_to_clean, 0, ft_strlen_mod2(line_to_clean, '\n', 0));
    return (line_cleaned);
}

char *ft_get_content(int fd, char *line_to_clean)
{
    char    *buffer_content;
    int     bytes_read;

    buffer_content = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buffer_content)
        return (NULL);
    bytes_read = 1;
    while (!ft_strchr(line_to_clean, '\n') && bytes_read != 0)
    {
        bytes_read = read(fd, buffer_content, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free (buffer_content);
            free (line_to_clean);
            return (NULL);
        }
        buffer_content[bytes_read] = '\0';
        /*if (!line_to_clean)
        {
            line_to_clean = malloc(sizeof(char) * 1);
            line_to_clean[0] = '\0';
        }*/
        line_to_clean = ft_strjoin(line_to_clean, buffer_content);
    }
    free (buffer_content);
    return (line_to_clean);
}

char *get_next_line(int fd)
{
    static char    *line_to_clean;
    char *remainder;
    char    *line_cleaned;

    line_to_clean = "";// The string must be initialized because when running ft_strjoin inside the ft_get_content, it will return an error.
    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    line_to_clean = ft_get_content(fd, line_to_clean);
    if (!line_to_clean)
        return (NULL);
    line_cleaned = ft_clean_line(line_to_clean);
    remainder = ft_strchr(line_to_clean, '\n');
    printf("line_to_clean: %s\n", line_to_clean);
    printf("remainder: %s\n", remainder);
    printf("line_cleaned: %s\n", line_cleaned);
    return (line_cleaned);
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
    get_next_line(fd);
    get_next_line(fd);
    get_next_line(fd);

    close(fd);
    return (0);
}
