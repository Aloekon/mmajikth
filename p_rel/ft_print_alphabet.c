/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 01:52:14 by mmajikth          #+#    #+#             */
/*   Updated: 2019/09/06 01:52:14 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char a);

void ft_print_alphabet(void)
{
    char a;

    a = 'a';
    while(a <= 'z')
    {
        ft_putchar(a);
        a++;
    }
}