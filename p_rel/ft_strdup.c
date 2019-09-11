/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:57:10 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/09 13:45:59 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
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
