/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:08:25 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/21 14:08:26 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*ptr_substr;
	size_t	i;

	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	ptr_substr = malloc (sizeof(char) * (len + 1));
	if (!ptr_substr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		((char *)ptr_substr)[i] = s[start + i];
		i++;
	}
	((char *)ptr_substr)[i] = '\0';
	return ((char *)ptr_substr);
}
