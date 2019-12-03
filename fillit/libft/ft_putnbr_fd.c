/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:28:58 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/10 20:28:58 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nbr;
	int			dig;
	int			i;

	nbr = n;
	i = 0;
	dig = 1;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	while (nbr / dig >= 10)
		dig *= 10;
	while (dig != 0)
	{
		ft_putchar_fd('0' + nbr / dig, fd);
		nbr = nbr % dig;
		dig = dig / 10;
	}
}
