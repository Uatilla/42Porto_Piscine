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

#include <stdio.h>

int main()
{
    char content[255] = "a";//How can I remove the size of this char pointer?

    FILE *fpointer = fopen("test.txt", "r");
    //if (fgets(content, 2, fpointer) == NULL)
    //    return (0);
    while (fgets(content, 3, fpointer) != NULL) //check why 2 shows only one character.
        printf("%s", content);
    fclose(fpointer);
    return (0);
}
