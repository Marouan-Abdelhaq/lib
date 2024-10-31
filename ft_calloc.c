/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:11:05 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/30 20:24:06 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	l;
	size_t	i;
	void	*ptr;

	i = 0;
	l = nmemb * size;
	ptr = malloc(l);
	p = (char *)ptr;
	if (!nmemb && (l / nmemb != size))
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
