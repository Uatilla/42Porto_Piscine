/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sa-- <mde-sa--@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 15:20:28 by mde-sa--          #+#    #+#             */
/*   Updated: 2023/03/21 10:10:09 by mde-sa--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	whitespace_and_sign(int *i, int *sign, char *str)
{
	int		j;

	j = 0;
	while (str[j] == '\f' || str[j] == '\t' || str[j] == ' '
		|| str[j] == '\n' || str[j] == '\r' || str[j] == '\v')
		j++;
	while (str[j] && (str[j] == '+' || str[j] == '-'))
	{
		if (str[j] == '-')
			*sign = -(*sign);
		j++;
	}
	*i = j;
}

int	is_number_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == c)
		return (1);
	return (0);
}

int	convert_int_from_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	check_base(char *base, int base_length)
{
	int		i;
	int		j;

	if (base_length < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\f'
			|| base[i] == '\t' || base[i] == ' ' || base[i] == '\n'
			|| base[i] == '\r' || base[i] == '\v')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		result;
	int		base_length;
	int		sign;

	base_length = 0;
	result = 0;
	sign = 1;
	while (base[base_length])
		base_length++;
	if (check_base(base, base_length) == 0)
		return (0);
	whitespace_and_sign(&i, &sign, str);
	while (str[i] && is_number_in_base(str[i], base))
	{
		result *= base_length;
		result += convert_int_from_base(str[i], base);
		i++;
	}
	result *= sign;
	return (result);
}
