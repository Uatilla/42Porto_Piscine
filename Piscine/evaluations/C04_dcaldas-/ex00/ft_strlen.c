/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaldas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:12:40 by dcaldas-          #+#    #+#             */
/*   Updated: 2023/03/21 21:22:21 by dcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main()
{
	char	*string = "Ola 42 Porto";
	printf("strlen: %lu\n",strlen(string));
	printf("ft_strlen: %d\n",ft_strlen(string));
	return (0);
}
