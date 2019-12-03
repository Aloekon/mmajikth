/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:57:10 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/11 14:01:57 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;
	int		i;

	i = 0;
	if (!(res = (char *)malloc(ft_strlen(src) + 1)))
		return (0);
	while (src[i] != 0)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
