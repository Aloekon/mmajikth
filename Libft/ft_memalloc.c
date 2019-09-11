/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:04:49 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/10 21:04:49 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *	ft_memalloc(size_t size)
{
	void	*p;

	if (!(p = (void *)malloc(size)))
		return (NULL);
	return (p);
}
