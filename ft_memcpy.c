/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:44:47 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/31 18:36:43 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*v;
	size_t			i;

	i = 0;
	p = (unsigned char *)dest;
	v = (unsigned char *)src;
	while (i < n)
	{
		p[i] = v[i];
		i++;
	}
	return (dest);
}
