/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:07:37 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/26 15:14:12 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*o;

	o = 0;
	while (*s)
	{
		if (c == *s)
		{
			o = (char *)s;
		}
		s++;
	}
	return (o);
}
