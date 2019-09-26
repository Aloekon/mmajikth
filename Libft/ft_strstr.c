/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:42:22 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 19:42:22 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int pos;
	unsigned int i;

	if (*to_find == '\0')
		return ((char *)str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == *to_find)
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return ((char *)(str + pos));
		}
		pos++;
	}
	return (NULL);
}
