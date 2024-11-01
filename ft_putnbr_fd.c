/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:08:21 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/01 02:44:13 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write (fd, "-2147483648", 11);
    }
    else if (n < 0)
    {
        write (fd, "-", 1);
        ft_putnbr_fd(n, fd);
    }
    else if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        char c = n + '0';
        write (fd, &c, 1);
    }
}

int main()
{
    int n = 10422645587;
    int fd = open("tst.txt", O_WRONLY, 50);
    ft_putnbr_fd(n, fd);
}