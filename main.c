/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:39:53 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/04 15:53:54 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>


void test_atoi(char *str) {
    int result = ft_atoi(str);
    printf("ft_atoi(\"%s\") = %d\n", str, result);
}

int main() {
    // Tests de base
    test_atoi("-+42");
    test_atoi("-42");
    test_atoi("0");
    test_atoi("+42");
    test_atoi("   42");
    test_atoi("   -42");

    // Espaces et signes variés
    test_atoi(" \t\n\r\v\f42");
    test_atoi("   +42");
    test_atoi("   -42");

    // Dépassement d'entier
    test_atoi("2147483647");
    test_atoi("-2147483648");
    test_atoi("2147483648"); // Overflow
    test_atoi("-2147483649"); // Underflow

    // Caractères non numériques
    test_atoi("42abc");
    test_atoi("abc42");
    test_atoi("42 56");
    test_atoi("   ");

    // Chaîne vide et caractères spéciaux
    test_atoi("");
    test_atoi("   ");
    test_atoi("+");
    test_atoi("-");

    // Cas de bord supplémentaires
    test_atoi("00042");
    test_atoi("+00042");
    test_atoi("-00042");
    test_atoi(" +42");

    return 0;
}
