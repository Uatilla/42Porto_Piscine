/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:15:02 by uviana-a          #+#    #+#             */
/*   Updated: 2023/05/28 15:15:05 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*__________________________________[HEADERS]________________________________*/

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

/*_________________________________[FUNCTIONS]_______________________________*/
/*------------------------------*Mandatory Part*-----------------------------*/
char	*ft_itoa(int n); //libft

int		ft_putstr(char *str);

int		ft_putchar(const char c);

int		ft_hex_base(unsigned long decimal_address, int flag);

int		ft_ubase(unsigned int number);

int		ft_printf(const char *str, ...);

size_t	ft_strlen(const char *s); //libft

#endif
