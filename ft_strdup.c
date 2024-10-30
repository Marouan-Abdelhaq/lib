/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:42:10 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/28 20:26:59 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *str;
    size_t len = 0;
    str = (char *)malloc(sizeof(char) * (len = strlen(s) + 1));
    if (str == NULL)
    {
        return (NULL);
    }
    while (len--)
    {
        str[len] = s[len];
    }
    str[len] = '\0';
    return (str);
}
