/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:16:52 by fernacar          #+#    #+#             */
/*   Updated: 2023/03/12 20:40:29 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;
	//se o numero for o menor possivel:
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		//return abaixo para nao entrar nos demais ifs.
	return;
	}
	//se o nb for negativo troca para positivo.
	if (nb < 0)
	{
		//write(1, "-", 1);
		nb *= -1;
	}
	//se o nb for maior que 10 divida por 10 (ex: 200 / 10 = 20) e rode a funcao novamente com o novo valor (20).
	if (nb >= 10)
	{
		printf("%d\n",nb);
		ft_putnbr(nb / 10);
	}
	//Tem que ter esse '0' + para que o write funcione na proxima linha de comando.
	c = '0' + (nb % 10);
	//write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(-20000);

return(0);
}
