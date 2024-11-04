/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:07:51 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/04 16:05:45 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *str;
    char *new_str;
    if  (!s ||  !f)
    return (NULL);
    i = 0;
    str = (char *)s;
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
    return (NULL);
    while (str[i])
    {
        new_str[i] = f(i, str[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
// Fonction de transformation pour mettre en majuscule
char to_upper(unsigned int i, char c) {
    (void)i;  // On ignore l'index
    return (char)toupper((unsigned char)c);
}
#include <stdio.h>
int main() {
    char *s = ft_strmapi("hello", to_upper);
    if (s) {
        printf("Résultat : %s\n", s);  // Affiche "HELLO"
        free(s);  // Libère la mémoire allouée
    }
    return 0;
}