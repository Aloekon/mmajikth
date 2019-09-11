/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:28:23 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/11 14:34:06 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int start;
	int	i;

	if (!s1 || !s2)
		return NULL;
	start = ft_strlen(s1);
	while (s2[i] != 0)
	{
		s1[start + i] = s2[i];
		i++;
	}
	s1[start+i] = 0;
	return (s1);
}
