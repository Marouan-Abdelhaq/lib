/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:53:56 by mabdelha          #+#    #+#             */
/*   Updated: 2024/11/02 22:02:46 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = strlen(dest);
	size_src = strlen(src);
	if (size <= size_dest)
	{
		return (size + size_src);
	}
	while (src[i] && (size_dest + i < size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
