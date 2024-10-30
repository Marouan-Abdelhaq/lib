/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:01:10 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/26 18:26:43 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = s1;
	p2 = s2;
	while (n > 0 && *p1 && *p2)
	{
		if (*p1 != *p2)
		{
			return ((unsigned char *)p1 - (unsigned char *)p2);
		}
		n--;
		p1++;
		p2++;
	}
	return (0);
}
