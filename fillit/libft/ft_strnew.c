/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:31:20 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/11 13:40:16 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	if (size + 1 == 0)
		return (NULL);
	if (!(s = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
