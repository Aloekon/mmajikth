/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:28:23 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/27 15:44:00 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	size_t	start;
	size_t	i;

	start = ft_strlen(s1);
	i = 0;
	while (s2[i] != 0)
	{
		s1[start + i] = s2[i];
		i++;
	}
	s1[start + i] = 0;
	return (s1);
}
