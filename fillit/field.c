/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:11:26 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/06 15:00:16 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_max(t_fig inf, int size, int i, int j)
{
	int	maxi;
	int maxj;
	int	minj;
	int k;
	int	fign;

	k = 0;
	maxi = 0;
	maxj = 0;
	minj = 0;
	fign = inf.a[inf.fign];
	while (k < 8)
	{
		if (k % 2 == 0 && WHOLE_TETR[fign][k] > maxi)
			maxi = WHOLE_TETR[fign][k];
		else if (k % 2 == 1 && WHOLE_TETR[fign][k] > maxj)
			maxj = WHOLE_TETR[fign][k];
		else if (k % 2 == 1 && WHOLE_TETR[fign][k] < minj)
			minj = WHOLE_TETR[fign][k];
		k++;
	}
	if (maxi + i < size && maxj + j < size && minj + j >= 0)
		return (1);
	return (0);
}

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

void	free_field(char **field)
{
	int i;

	i = 0;
	while (field[i] != NULL)
	{
		free(field[i]);
		i++;
	}
	free(field);
}
