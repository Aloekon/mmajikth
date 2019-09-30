/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:00:14 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 23:47:19 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	res = ft_strnew(len);
	if (!res || !s)
		return (NULL);
	i = 0;
	while ((size_t)i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
