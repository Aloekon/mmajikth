/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:39:07 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 20:39:07 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;

	if (s1 && s2)
		size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	else if (s1)
		size = ft_strlen((char *)s1);
	else if (s2)
		size = ft_strlen((char *)s2);
	else
		return (NULL);
	if (!(res = ft_strnew(size)))
		return (NULL);
	if (s1)
		res = ft_strcpy(res, (char *)s1);
	else
		res = ft_strcpy(res, (char *)s2);
	if (s1 && s2)
		res = ft_strcat(res, (char*)s2);
	return (res);
}
