/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:36:27 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/27 15:22:03 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*res;
	size_t	len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (check_space(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strnew(0));
	while (check_space(s[end]) && s[end])
		end--;
	len = (size_t)(end - start + 1);
	res = ft_strsub(s, start, len);
	return (res);
}
