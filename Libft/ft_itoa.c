/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:16:18 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/27 15:36:48 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dig_count(int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		res = 1;
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	long long	nbr;
	int			dig;
	int			i;
	char		*res;

	if (!(res = ft_strnew(dig_count(n))))
		return (NULL);
	nbr = n;
	i = 0;
	dig = 1;
	if (nbr < 0)
	{
		res[i++] = '-';
		nbr *= -1;
	}
	while (nbr / dig >= 10)
		dig *= 10;
	while (dig != 0)
	{
		res[i] = '0' + nbr / dig;
		nbr = nbr % dig;
		dig = dig / 10;
		i++;
	}
	return (res);
}
