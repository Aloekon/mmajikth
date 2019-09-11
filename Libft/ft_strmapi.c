/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:45:01 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/11 13:46:57 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		r[i] = f(i, s[i]);
		i++;
	}
	return (r);
}
