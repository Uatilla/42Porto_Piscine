/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 02:22:36 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/21 02:23:23 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_atoi_base(const char *str, int str_base);

int main(int argc, char **argv)
{
	int	i;

	i = 1;
    if (argc == 3)
    {
        while (i <= 16)
        {
        	printf("Base [%d]: %d\n", i, ft_atoi_base(argv[1], i));
    		i++;
    	}
    }
    return (0);
}
