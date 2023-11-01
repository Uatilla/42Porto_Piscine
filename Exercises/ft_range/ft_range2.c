/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:38:11 by uviana-a          #+#    #+#             */
/*   Updated: 2023/10/21 18:38:12 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_size(int start, int end)
{
	int	counter;

	counter = 0;
	if (end >= start)
	{
		while (start <= end)
		{
			start++;
			counter++;
		}
	}
	else
	{
		while (end <= start)
		{
			end++;
			counter++;
		}
	}
	return (counter);
}

int	*ft_range(int start, int end)
{
	int	*arr;
	int	ar_size;
	int	i;
	int	*head;

	ar_size = ft_size(start, end);
	arr = (int *)malloc(sizeof(int) * ar_size);
	head = arr;
	if (!arr)
		return (0);
	i = 0;
	while (i < ar_size)
	{
		arr[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (head);
}

int	main(void)
{
	int	num1;
	int	num2;
	int	*arr;
	int	i;

	num1 = -3;
	num2 = 0;
	arr = ft_range(num1, num2);
	i = 0;
	while (i < ft_size(num1, num2))
	{
		printf("arr[%d]: %d\n", i, arr[i]);
		i++;
	}
	return (0);
}
