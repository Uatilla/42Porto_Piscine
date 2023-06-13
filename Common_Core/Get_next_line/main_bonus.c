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

int	main(void)
{
	char	*file;
	char	*file2;
	char	*file3;
	char	*test;
	int		i;
	int		fd;
	int		fd2;
	int		fd3;

	i = 1;
	file = "test.txt";
	file2 = "test2.txt";
	file3 = "test3.txt";	
	fd = open(file, O_RDONLY);
	fd2 = open(file2, O_RDONLY);
	fd3 = open(file3, O_RDONLY);
	if (fd == -1)
	{
		printf("ERROR: the file couldn't be opened!\n");
		return (1);
	}
	while (i < 10)
	{
		test = get_next_line(fd);
		printf("File[1] Line[%d]: %s\n", i, test);
		free (test);
		test = get_next_line(fd2);
		printf("File[2] Line[%d]: %s\n", i, test);
		free (test);
		test = get_next_line(fd3);
		printf("File[3] Line[%d]: %s\n", i, test);
		free (test);
		i++;
	}
	close(fd);
	close(fd2);
	close(fd3);
	return (0);
}
