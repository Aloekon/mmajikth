/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:48:58 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 10:48:58 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    return (nb * ft_recursive_factorial(nb - 1));
}