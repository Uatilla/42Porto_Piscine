/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:30:31 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/15 13:30:32 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
//int	main()
//{
//	ft_strlen("Hello 42!");
//	
//return(0);
//}
//
//To run this code properly copy and paste de command 
//line below after the line (return(i)).
	//printf("%d ",i);/*
