/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iden_tetr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:29:15 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/04 14:45:16 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	check(int *ar)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i < 8)
	{
		if (ar[i] < 0)
			flag = i;
		i++;
	}
	if (flag != 0)
	{
		i = flag % 2;
		while (i < 8)
		{
			ar[i]++;
			i += 2;
		}

	}
}

int		normalize(char *tetr, int *ar)
{
	int 	i;
	int		j;

	i = 0;
	while (tetr[i] != '#')
		i++;
	ar[0] = i % 5;
	ar[1] = i / 5;
	j = 2;
	i++;
	while (i < 21)
	{
		if (tetr[i] == '#')
		{
			ar[j] = i % 5 - ar[0];
			ar[j + 1] = i / 5 - ar[1];
			j += 2;
		}
		i++;
	}
	ar[0] = 0;
	ar[1] = 0;
	check (ar);
	return (0);
}

int		tetcmp(char *tetr)
{
	int		*ar;
	int		i;
	int		j;

	if (!(ar = (int *)malloc(8 * sizeof(int))))
		return (-1);
	normalize(tetr, ar);
	i = 0;
	while (i < 19)
	{
		j = 0;
		while (j < 8 && ar[j] == WHOLE_TETR[i][j])
			j++;
		if (j == 8)
		{
			free(ar);
			return (i);
		}
		i++;
	}
	free(ar);
	return (-1);
}

int		*return_arr(char *tetr, int len)
{
	int		i;
	int		j;
	int		*res;

	if (!(res = (int *)malloc(len * sizeof(int))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		res[i] = tetcmp(tetr + j);
		if (res[i] == -1)
			{
				free(res);
				return (NULL);
			}
		j += 21;
		i++;
	}
	return (res);
}