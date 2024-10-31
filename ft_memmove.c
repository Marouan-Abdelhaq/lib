/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:51:27 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/30 20:29:05 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*v;
	size_t				i;

	v = (unsigned char *)src;
	p = (unsigned char *)dest;
	if (p < v)
	{
		i = 0;
		p += n;
		v += n;
		while (i < n)
		{
			p[i] = v[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
			p[i - 1] = v[i - 1];
		i--;
	}
	return (dest);
}
