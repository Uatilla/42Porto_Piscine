/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:19:21 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/19 15:19:22 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && i < n)
	{
		i++;
	}
	if (s1[i] != s2[i] && i < n)
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}
