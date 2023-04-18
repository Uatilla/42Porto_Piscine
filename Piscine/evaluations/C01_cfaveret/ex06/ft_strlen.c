/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaveret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 02:03:06 by cfaveret          #+#    #+#             */
/*   Updated: 2023/03/15 03:50:46 by cfaveret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
		size++;
	return (size);
}

/*int	main(void)
{
	char	*s;

	s = "Hello, world!";
	printf ("%d\n", ft_strlen(s));
}*/
