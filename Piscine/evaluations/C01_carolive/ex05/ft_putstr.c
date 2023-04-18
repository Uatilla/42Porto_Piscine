/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolive <carolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:53:58 by carolive          #+#    #+#             */
/*   Updated: 2023/03/19 18:53:21 by carolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}
/*
int	main(void)
{
	char *str = "alow galera\n";

	ft_putstr(str);
	return (0);
} */
