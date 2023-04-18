/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcosta-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 01:36:50 by fcosta-e          #+#    #+#             */
/*   Updated: 2023/03/21 20:55:09 by fcosta-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			write(1, "\\", 1);

		}
	}

}

int	main()
{
	char	a[] = "Ola\nesta bem?";
	ft_putstr_non_printable(a);
}
