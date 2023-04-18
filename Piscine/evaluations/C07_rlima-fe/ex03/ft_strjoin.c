/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlima-fe <rlima-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:17:34 by rlima-fe          #+#    #+#             */
/*   Updated: 2023/03/28 12:10:59 by rlima-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs) + size - 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char	*tab[4];
	tab[0] = "Arroz";
	tab[1] = "ser";
	tab[2] = "muito";
	tab[3] = "bom";
	printf("%s", ft_strjoin(4, tab, " "));
	return (0);
}*/