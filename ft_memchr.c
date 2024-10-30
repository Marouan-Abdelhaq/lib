/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:46:15 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/28 23:56:38 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;

	p = (unsigned char *)s;
	v = c;
	while (*p && n--)
	{
		if (v == *p)
		{
			return ((char *)p);
		}
		p++;
	}
	return (NULL);
}
