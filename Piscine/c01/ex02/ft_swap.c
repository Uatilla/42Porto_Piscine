/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:37:24 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/14 21:37:36 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pa = &a;
	int	*pb = &b;
	
	a = '8';
	b = '9';
	
	
	
	write(1, "A", 2);
	write(1, *&pa, 4);
	write(1, "B", 1);
	write(1, *&pb, 4);
	write(1, "\n", 2);
	ft_swap(pa, pb);
	
return(0);
}
Copy the follow code to test inside the function ft_swap scope:
	write(1, "A", 2);
	write(1, *&a, 4);
	write(1, "B", 1);
	write(1, *&b, 4);*/
