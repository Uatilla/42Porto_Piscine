/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:16:14 by uviana-a          #+#    #+#             */
/*   Updated: 2023/04/27 09:16:16 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    char    c;

    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    
        ft_putnbr_fd(n % 10, fd);
        c = n + '0';
        write(fd, &c, 1);
}

int main()
{
    /*int n_ft_putnbr_fd = -2147483648;
    ft_putnbr_fd(n_ft_putnbr_fd, 1);
    write(1, "\n", 1);*/
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);
    /*ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);
    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);*/
    return (0);
}
