/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:08:20 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/27 17:08:21 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct node //node structure
{
    int value; //value of the node (content)
    struct node *next; //pointer to the next node
};
typedef struct node node_t; //node_t is the same as struct node

void    printlist(node_t *head)
{
    node_t *temporary = head; //temporary pointer to the head

    while (temporary != NULL) //while the temporary pointer is not NULL
    {
        printf("%d - ", temporary->value); //print the value of the node
        temporary = temporary->next; //temporary pointer points to the next node
    }
    printf("\n");
}

int main()
{
    node_t n1, n2, n3; //creating 3 nodes
    node_t *head; //pointer to the first node
    
    n1.value = 45; //assigning values to the nodes
    n2.value = 8;
    n3.value = 32;

    head = &n3; //head points to the first node
    n3.next = &n2; //n3 points to the second node
    n2.next = &n1; //n2 points to the third node
    n1.next = NULL; //n1 points to NULL    

    node_t n4; //creating a new node
    n4.value = 13; //assigning a value to the new node
    n4.next = &n3;//n4 points to the third node
    head = &n4;//head points to the new node

    head = head->next; //head points to the second node

    printlist(head); //print the list
    return (0);
}