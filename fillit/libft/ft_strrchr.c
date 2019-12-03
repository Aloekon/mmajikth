/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:32:51 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/26 19:32:51 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		ptr = (char *)s;
	if (ptr)
		return (ptr);
	return (0);
}
