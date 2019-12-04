/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:11:26 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/04 15:38:04 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	init_filed(char **field, int num)
{
	int		i;
	int		j;

	i = 0;
	while (i < num)
	{
		j = 0;
		while (j < num)
		{
			field[i][j] = '.';
			j++;
		}
		field[i][j] = '\0';
		i++;
	}
	field[i] = NULL;
}

char	**gen_field(int num)
{
	int		i;
	char	**res;

	if (!(res = (char **)malloc((num + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < num)
	{
		if (!(res[i] = ft_strnew(num)))
			return (NULL);
		i++;
	}
	init_filed(res, num);
	return (res);
}

void	print_field(char **field)
{
	int i;

	i = 0;
	while (field[i] != NULL)
	{
		ft_putstr(field[i]);
		ft_putchar('\n');
		i++;
	}
}