/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:46:25 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 20:46:25 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*res;
	size_t			len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s);
	while (check_space(s[start]) && s[start])
	{
		start++;
	}
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (check_space(s[end]) && s[end])
		end--;
	len = (size_t)(end - start + 1);
	res = ft_strsub(s, start, len);
	return (res);
}
