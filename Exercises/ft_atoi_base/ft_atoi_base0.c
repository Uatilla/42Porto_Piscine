/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uatilla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:33:52 by uatilla           #+#    #+#             */
/*   Updated: 2023/10/28 12:34:01 by uatilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/*void	ft_free_array(char **split_ptr)
{
	int	i;

	i = -1;
	while (split_ptr[++i])
		free(split_ptr[i]);
	free(split_ptr);
}

size_t	ft_count_char(char *str, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (str[++i])
		if (str[i] == c)
			count++;
	return (count);
}

bool	ft_contains(const char *haystack, const char *needle)
{
	int	h;
	int	n;

	n = 0;
	h = -1;
	if (needle[n] == 0)
		return (false);
	while (haystack[++h])
	{
		while (haystack[h + n] && haystack[h + n] == needle[n])
			n++;
		if (!(needle[n]))
			return (true);
		n = 0;
	}
	return (false);
}*/

static int	is_in_base(char c, const char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (-1);
}

int	ft_atoi_base(const char *nptr, const char *base)
{
	unsigned int	value;
	int				base_len;

	base_len = ft_strlen(base);
	value = 0;
	while (is_in_base(ft_tolower(*nptr), base) != -1)
	{
		value = value * base_len + is_in_base(ft_tolower(*nptr), base);
		nptr++;
	}
	return ((int)value);
}
