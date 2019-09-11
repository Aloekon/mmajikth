/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:26:32 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/11 13:47:03 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*r;
	int		len;
	int		i;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	r = ft_strnew(len);
	i = 0;
	while (s[i] != 0)
	{
		r[i] = f(s[i]);
		i++;
	}
	return (r);
}
