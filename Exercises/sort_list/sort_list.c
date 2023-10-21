/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:15:15 by uviana-a          #+#    #+#             */
/*   Updated: 2023/10/21 15:15:19 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	/*IF THERE IS ONLY ONE ELEMENT OR NO ELEMENTS, IT DOESN'T GO
	INSIDE THE WHILE LOOP.*/
	while (lst->next != NULL)
	{
		//If *cmp returns 0, this means that the list is not sorted.
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
	
}
/*
int	main()
{
	t_list	*head;
	t_list *start;
	//DEFINING NODES OF THE LINKED LIST:
	head = malloc(sizeof(t_list));
	head->data = 1;
	head->next = malloc(sizeof(t_list));
	head->next->data = 3;
	head->next->next = malloc(sizeof(t_list));
	head->next->next->data = 2;
	head->next->next->next = NULL;
	
	start = head;
	//PRINTING THE DATA (BEFORE):
	while (start)
	{
		printf("data: %d\n", start->data);
		start = start->next;
	}
	start = head;
	//SORTING THE DATA:
	start = sort_list(start, ascending);
	
	//PRINTING THE DATA (AFTER):
	while (start)
	{
		printf("data: %d\n", start->data);
		start = start->next;
	}
	return (0);
}*/
