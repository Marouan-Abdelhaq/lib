/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:39:53 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/04 21:59:38 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "abcd";
    char d[] = "efjh";
    printf("%s\n", memmove(d, s, 3));
    
    return 0;
}