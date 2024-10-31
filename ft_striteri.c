/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 03:42:03 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/31 20:18:07 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
void ft_touppere(unsigned int index, char *c) {
    *c = 'a';
}

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    unsigned int i;
    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

int main()
{
    char c[] = "hello";
    ft_striteri(c, ft_touppere);
    printf("%s", c);
}
