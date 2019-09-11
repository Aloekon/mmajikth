/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:22:57 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 19:22:57 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	print_er(char *str)
{
    while(*str)
    {
        write(2, str, 1);
        str++;
    }
}

void    display(char *str)
{
    int     fd;
    int     ret;
    char    buf[BUFF_SIZE + 1];

    fd = open(str, O_RDONLY);
    if (fd == -1)
        return;
    while((ret = read(fd, buf, BUFF_SIZE)))
    {
        write(1, buf, ret);
    }
}

int main(int argv, char** argc)
{
    if (argv == 1)
    {
        print_er("File name missing.\n");
        return(0);
    }
    if (argv > 2)
    {
        print_er("Too many arguments.\n");
        return(0);
    }
    display(argc[1]);
    return 0;
}