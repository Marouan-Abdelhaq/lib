/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:32:50 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/30 22:35:24 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int ft_count_digits(int n)
{
    int l = 0;
    if (n <  0)
    {
        l = 1;
    }
    while (n != 0)
    {
        n = n / 10;
        l++;
    }
    return (l);
}

char *ft_itoa(int n)
{
    long nb = n;
    int l = ft_count_digits(n);
    char  *str = (char *)malloc((l + 1) * sizeof(char));
    str[l] = '\0';
    if (nb  < 0)
    {
        str[0]  = '-';
        nb = -nb;
    }
    if (nb == 0)
    {
        str[0] = '0';
    }
    while (nb > 0)
    {
        str[--l] = (nb % 10) + '0';
        nb = nb / 10;
    }
    return (str);
}