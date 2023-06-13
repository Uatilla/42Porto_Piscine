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

char *ft_clean_line(char *line_to_clean)
{
    char    *line_cleaned;
	int		len_line_cleaned;

    len_line_cleaned = ft_strlen_mod2(line_to_clean, '\n', 0);
	line_cleaned = malloc(sizeof(char) * len_line_cleaned + 2);
    if (!line_cleaned)
        return (NULL);
    line_cleaned = ft_substr(line_to_clean, 0, len_line_cleaned + 1);
	line_cleaned[len_line_cleaned + 1] = '\0';
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
    if (!line_to_clean)
        {
            line_to_clean = malloc(sizeof(char) * 1);
            line_to_clean[0] = '\0';
        }
	while (!ft_strchr_mod(line_to_clean, '\n') && bytes_read != 0)
    {
        bytes_read = read(fd, buffer_content, BUFFER_SIZE);
        if (bytes_read == -1)
        {
            free (buffer_content);
            free (line_to_clean);
            return (NULL);
        }
        buffer_content[bytes_read] = '\0';
        line_to_clean = ft_strjoin(line_to_clean, buffer_content);
    }
    free (buffer_content);
    return (line_to_clean);
}

char *get_next_line(int fd)
{
    static char    *line_to_clean;
    char    *line_cleaned;

    if (BUFFER_SIZE < 0 || fd < 0)
        return (NULL);
    line_to_clean = ft_get_content(fd, line_to_clean);
	if (!line_to_clean)
	{
		//printf("TESTE...\n");
        return (NULL);
	}
    line_cleaned = ft_clean_line(line_to_clean);
    line_to_clean = ft_strchr_mod(line_to_clean, '\n');

	
    return (line_cleaned);
}
