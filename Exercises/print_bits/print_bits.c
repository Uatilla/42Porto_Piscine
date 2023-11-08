/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:55:35 by uatilla           #+#    #+#             */
/*   Updated: 2023/11/08 18:55:37 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

 void    ft_print_bits(unsigned char octet)
 {
     unsigned char binary_pos;
 
     binary_pos = 128; //10000000 in binary, because the most significant number is 1 and the rest is 0;
     while (binary_pos)
     {
         if (binary_pos & octet) //this means that the program is checking if ii both variables the bit is 1.
             write(1, "1", 1);
         else
             write(1, "0", 1);
        binary_pos = binary_pos >> 1; //this means that the program is changing the current bit position to the next as 10000000 to 01000000, and so on.
     }
 }
 
/*
int	main(int argc, char **argv)
{	
	print_bits(argv[1][0]);
	return (0);
}*/
