/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:23:38 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/06 16:25:23 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_minsqrt(int num)
{
	int		i;

	i = 1;
	while (i * i < num)
		i++;
	return (i);
}

int		check(t_fig inf, int size, char **field)
{
	int		res;
	int		*a;
	int		fign;

	a = inf.a;
	fign = a[inf.fign];
	if (!check_max(inf, size, inf.i, inf.j))
		return (0);
	res = 0;
	if (field[WHOLE_TETR[fign][0] + inf.i][WHOLE_TETR[fign][1] + inf.j] == '.')
		res++;
	if (field[WHOLE_TETR[fign][2] + inf.i][WHOLE_TETR[fign][3] + inf.j] == '.')
		res++;
	if (field[WHOLE_TETR[fign][4] + inf.i][WHOLE_TETR[fign][5] + inf.j] == '.')
		res++;
	if (field[WHOLE_TETR[fign][6] + inf.i][WHOLE_TETR[fign][7] + inf.j] == '.')
		res++;
	if (res == 4)
		return (1);
	return (0);
}

void	place(t_fig inf, char **field, int i, int j)
{
	int	*a;
	int	fign;

	a = inf.a;
	fign = inf.fign;
	field[WHOLE_TETR[a[fign]][0] + i][WHOLE_TETR[a[fign]][1] + j] = 'A' + fign;
	field[WHOLE_TETR[a[fign]][2] + i][WHOLE_TETR[a[fign]][3] + j] = 'A' + fign;
	field[WHOLE_TETR[a[fign]][4] + i][WHOLE_TETR[a[fign]][5] + j] = 'A' + fign;
	field[WHOLE_TETR[a[fign]][6] + i][WHOLE_TETR[a[fign]][7] + j] = 'A' + fign;
}

void	delete(t_fig inf, char **field, int i, int j)
{
	int	*a;
	int	fign;

	a = inf.a;
	fign = a[inf.fign];
	field[WHOLE_TETR[fign][0] + i][WHOLE_TETR[fign][1] + j] = '.';
	field[WHOLE_TETR[fign][2] + i][WHOLE_TETR[fign][3] + j] = '.';
	field[WHOLE_TETR[fign][4] + i][WHOLE_TETR[fign][5] + j] = '.';
	field[WHOLE_TETR[fign][6] + i][WHOLE_TETR[fign][7] + j] = '.';
}

int		solve(char **field, int len, int size, t_fig inf)
{
	if (inf.fign == len)
		return (0);
	inf.i = 0;
	while (field[inf.i] != NULL)
	{
		inf.j = 0;
		while (field[inf.i][inf.j] != '\0')
		{
			if (check(inf, size, field))
			{
				place(inf, field, inf.i, inf.j);
				inf.fign++;
				if (!solve(field, len, size, inf))
					return (0);
				inf.fign--;
				delete(inf, field, inf.i, inf.j);
			}
			inf.j++;
		}
		inf.i++;
	}
	return (1);
}
