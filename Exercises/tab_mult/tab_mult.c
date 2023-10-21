/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:37:48 by uviana-a          #+#    #+#             */
/*   Updated: 2023/10/21 14:37:50 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int num)
{
	char	c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + 48;
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (str[i] && str[i] != '\0')
	{
		num = num + (str[i] - 48);
		if (str[i + 1] && str[i + 1] != '\0')
			num *= 10;
		i++;
	}
	return (num);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		num;
	int		result;
	char	c;

	i = 1;
	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			c = i + 48;
			write (1, &c, 1);
			write (1, " x ", 3);
			ft_putnbr(num);
			write (1, " = ", 3);
			result = i * num;
			ft_putnbr(result);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
