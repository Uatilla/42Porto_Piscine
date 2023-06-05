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
#include <fcntl.h>

int main()
{
    char content[6] = "a";//How can I remove the size of this char pointer?
    int line_counter = 1;
    printf("Size[%ld]\n", sizeof(content));
    FILE *fpointer = fopen("test.txt", "r");
    //check if opened the file
    if (fpointer == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }
    while (fgets(content, sizeof(content), fpointer) != NULL)//how the function works in terms of main string and temp string.
    {
        printf("-%s|", content);
        line_counter++;
    }
    printf("\n");
    fclose(fpointer);
    return (0);
}
