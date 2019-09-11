/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:56:57 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 12:56:57 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char a);

void    ft_putstr(char *str)
{
    while (*str != 0)
    {
        ft_putchar(*str);
        str++;
    }
}

int     ft_strcmp(char *s1, char *s2)
{
    while(*s1 == *s2 && *s1)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

void    ft_sort(char **params, int nb)
{
    int     i;
    int     j;
    char    *temp;

    i = 1;
    while (i < nb)
    {
        j = i + 1;
        while (j <= nb)
        {
            if (ft_strcmp(params[i], params[j]) > 0)
            {
                temp = params[i];
                params[i] = params[j];
                params[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int     main(int argv, char** argc)
{
    int i;

    if (argv == 1)
        return 0;
    ft_sort(argc, argv - 1);
    i = 1;
    while (i < argv)
    {
        ft_putstr(argc[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}