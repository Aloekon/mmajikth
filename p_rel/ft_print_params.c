/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:37:50 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 12:37:50 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != 0)
    {
        ft_putchar(*str);
        str++;
    }
}

int main (int argv, char **argc)
{
    int i;

    if (argv == 1)
        return 0;
    i = 1;
    while (i < argv)
    {
        ft_putstr(argc[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}