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

struct node //node structure: At the beginning of the code, a structure named "node" is defined, which contains two fields: an integer value and a pointer to the next node. 
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

node_t  *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t)); //allocating memory for the new node
    if (!result)
        return (NULL);
    result->value = value; //assigning the value to the new node
    result->next = NULL; //assigning NULL to the next pointer of the new node
    return (result); //return the new node
}

int main()
{
    node_t  *head; //pointer to the first node
    node_t  *tmp;

    tmp = create_new_node(32);
    head = tmp;
    tmp = create_new_node(8);
    tmp->next = head;
    head = tmp;
    tmp = create_new_node(2);
    tmp->next = head;
    head = tmp;

    printlist(head); //print the list
    return (0);
}