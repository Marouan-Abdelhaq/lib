/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:27:10 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/29 16:35:23 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	i;

	if (!*little)
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*little == *big)
		{
			l = len;
			i = 0;
			while (little[i] == big[i] && little[i] && big[i] && l > 0)
			{
				i++;
			}
			if (!little[i])
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
