/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:00:49 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/25 14:45:54 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*p;
	size_t		i;

	i = 0;
	p = (unsigned char *)s;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
	return (s);
}
