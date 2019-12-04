/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:23:38 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/04 16:51:40 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_minsqrt(int num)
{
	int		i;

	i = 1;
	while (i * i < num)
		i++;
	return (i + 1);
}

//int		solve(char **field, int len, int fign, int *a)
//{
//	int		i;
//	int		j;
//
//	if (fign == len)
//		return (0);
//	i = 0;
//	while (field[i] != NULL)
//	{
//		j = 0;
//		while (field[i][j] != '\0')
//		{
//			if (check(i, j, a[fign]))
//			{
//				place(i, j, a[fign]);
//				if (solve(field, len, fign + 1, a))
//					return (0);
//				delete(i, j, a[fign]);
//			}
//			j++;
//		}
//		i++;
//	}
//	return (1);
//}
