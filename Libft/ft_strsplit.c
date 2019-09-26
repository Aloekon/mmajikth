/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 21:09:45 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 21:09:45 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char		*cpy_str(char *str, char c)
{
	char *start;

	start = str;
	while (*str && *str != c)
		str++;
	*str = '\0';
	return (ft_strdup(start));
}

static void		free_all(char **strs, size_t i)
{
	while (i--)
		ft_strdel(&(strs[i]));
	free(*strs);
}

static char		**get_strs(char *s, char c, size_t count)
{
	char	**strs;
	char	*str;
	size_t	i;

	i = 0;
	if ((strs = (char **)ft_memalloc(sizeof(char *) * (count + 1))))
	{
		while (i < count)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(str = get_str(s, c)))
				{
					free_all(strs, i);
					return (NULL);
				}
				strs[i++] = str;
				s += (ft_strlen(str) + 1);
			}
		}
		strs[i] = NULL;
	}
	return (strs);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strs;
	char	*str;

	if (!s || !(str = ft_strdup((char *)s)))
		return (NULL);
	strs = get_words(str, c, count_words(str, c));
	free(str);
	return (strs);
}
