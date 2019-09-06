/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:45:16 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 17:45:16 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_count_if(char **tab, int(*f)(char*))
{
    unsigned int   i;
    int             count;

    i = 0;
    count = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            count++;
        i++;
    }
    return(count);
}