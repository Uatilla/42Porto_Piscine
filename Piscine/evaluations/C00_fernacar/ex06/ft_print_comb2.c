/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:58:05 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/11 15:37:51 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int n1, int n2)
{
	char	characters[5];
	//Divide o numero em dois inteiros para que a funcao int funcione
	characters[0] = '0' + n1 / 10;
	characters[1] = '0' + n1 % 10;
	characters[2] = ' ';
	characters[3] = '0' + n2 / 10;
	characters[4] = '0' + n2 % 10;
	//print o array characters com 5 bytes de memoria (tamanho do array)
	write(1, &characters, 5);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	//atribuiu 0 ao n1 e ao n2
	n1 = 0;
	n2 = 0;
	while (n1 < 99 || n2 < 99)
	{
		//esse if so acontece caso o n2 seja maior ou seja pula a primeira iteracao 00 00.
		if (n2 > n1)
		{
			print_numbers(n1, n2);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
		}
		n2++;
		if (n2 > 99)
		{
			n2 = 0;
			n1++;
		}
	}
}

int	main(void)
{
	ft_print_comb2 ();

return(0);
}
