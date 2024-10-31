/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:56:18 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/31 00:04:28 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchr_trim(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	en;
	char	*s;

	st = 0;
	en = strlen(s1);
	while (st < en && ft_strchr_trim(set, s1[st]) != -1)
		st++;
	while (en > st && ft_strchr_trim(set, s1[en - 1]) != -1)
		en--;
	s = (char *)malloc((en - st + 1) * sizeof(char));
	if (!s)
		return (NULL);
	strncpy(s, s1 + st, en - st);
	s[en - st] = '\0';
	return (s);
}
