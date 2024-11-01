/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:52:30 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/31 21:57:19 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
        if (!s)
    {
        return;
    }
    while (*s)
    {
        write (fd, s, 1);
        s++;
    }
    write (fd, "\n", 1);
}