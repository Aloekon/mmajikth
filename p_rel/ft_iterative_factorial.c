/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:33:27 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 10:33:27 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int i;
    int res;

    i = 1;
    res = 1;
    if (nb < 0 || nb > 12)
        return 0;
    while (i <= nb)
    {
        res = res * i;
        i++;
    }
    return (res);
}