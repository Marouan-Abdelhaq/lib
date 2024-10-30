/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:11:26 by mabdelha          #+#    #+#             */
/*   Updated: 2024/10/30 06:11:27 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c && in_word)
		{
			count++;
			in_word = 0;
		}
		else if (*s != c)
			in_word = 1;
		s++;
	}
	if (in_word)
		count++;
	return (count);
}

static char	*ft_copy_word(const char *s, const char *e)
{
	size_t	l;
	char	*res;

	l = e - s;
	res = (char *)malloc(l + 1);
	if (!res)
		return (NULL);
	strncpy(res, s, l);
	res[l] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int			nb_words;
	char		**tab;
	int			i;
	const char	*st;

	st = s;
	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	tab = (char **)malloc((nb_words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		if (st < s)
		{
			tab[i] = ft_copy_word(st, s);
			if (!tab[i])
			{
				while (i > 0)
					free(tab[--i]);
				free(tab);
				return (NULL);
			}
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
