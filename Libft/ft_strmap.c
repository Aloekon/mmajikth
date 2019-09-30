/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:26:32 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/27 16:15:59 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*r;
	size_t		len;
	int			i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(r = ft_strnew(len)))
		return (r);
	i = 0;
	while (s[i] != 0)
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}
