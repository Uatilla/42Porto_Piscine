/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:17:30 by uviana-a          #+#    #+#             */
/*   Updated: 2023/06/13 23:08:56 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*__________________________________[HEADERS]________________________________*/

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

/*_________________________________[FUNCTIONS]_______________________________*/
/*------------------------------*Mandatory Part*-----------------------------*/

char	*ft_strchr_mod(char *s, int c);

char	*ft_strjoin_mod(char *s1, char *s2); //libft

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s); //libft

#endif
