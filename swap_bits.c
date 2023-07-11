 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   swap_bits.c                                        :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2023/07/10 18:33:06 by uviana-a          #+#    #+#             */
 /*   Updated: 2023/07/10 18:33:07 by uviana-a         ###   ########.fr       */
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
         binary_pos >>= 1; //this means that the program is changing the current bit position to the next as 10000000 to 01000000, and so on.
     }
 }
 
 unsigned char   ft_swap_bits(unsigned char octet)
 {
     return ((octet >> 4) | (octet << 4));    //the code is sending the first four bits and getting the last four bit, keep with | the bit that are 1.
 }
 /*
 int main()
 {
     int num = 30;
     ft_print_bits(num);
     printf("\n--------------\n");
     ft_print_bits(ft_swap_bits(num));
     return (0);
 }*/
