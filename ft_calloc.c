/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:11:05 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/28 17:48:17 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;  // pointer to the allocated memory
	char	*p;
	size_t	l;
	size_t	i;

	i = 0;
	l = nmemb * size;  // calculate the total size
	ptr = malloc(l);  // allocate memory
	p = (char *)ptr;   // convert to char pointer
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
