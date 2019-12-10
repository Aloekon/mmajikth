/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:20:03 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/10 14:49:28 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			transform(char *file, t_fig *inf, int *ret)
{
	int		fd;
	char	*tetr;
	int		i;

	*ret = 0;
	tetr = NULL;
	i = 0;
	fd = open(file, O_RDONLY);
	*ret = get_term(fd, &tetr);
	close(fd);
	if (*ret == 1)
	{
		ft_putstr("error\n");
		return (1);
	}
	*ret = (ft_strlen(tetr) + 1) / 21;
	if (*ret < 1 || *ret > 26)
	{
		ft_putstr("error\n");
		return (1);
	}
	inf->a = return_arr(tetr, *ret, *inf);
	free(tetr);
	return (0);
}

void		end(t_fig inf, int len)
{
	char	**field;
	int		size;
	int		k;

	size = ft_minsqrt(len * 4);
	field = gen_field(size);
	k = 1;
	while (k)
	{
		inf.fign = 0;
		k = solve(field, len, size, inf);
		if (k)
		{
			free_field(field);
			size++;
			field = gen_field(size);
		}
	}
	print_field(field);
	free(inf.a);
	free_field(field);
}

int			get_bs(t_fig inf, int argc, char **argv)
{
	int		len;

	len = 0;
	inf.a = NULL;
	if (argc == 2)
	{
		if (transform(argv[1], &inf, &len))
			return (0);
	}
	else
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	if (!inf.a)
	{
		ft_putstr("error\n");
		return (0);
	}
	end(inf, len);
	len = 0;
	free(inf.bs);
	return (0);
}

int			main(int argc, char **argv)
{
	t_fig	inf;

	inf.bs = (int **)malloc(19 * sizeof(int *));
	inf.bs[0] = T_1;
	inf.bs[1] = T_2;
	inf.bs[2] = T_3;
	inf.bs[3] = T_4;
	inf.bs[4] = T_5;
	inf.bs[5] = T_6;
	inf.bs[6] = T_7;
	inf.bs[7] = T_8;
	inf.bs[8] = T_9;
	inf.bs[9] = T_10;
	inf.bs[10] = T_11;
	inf.bs[11] = T_12;
	inf.bs[12] = T_13;
	inf.bs[13] = T_14;
	inf.bs[14] = T_15;
	inf.bs[15] = T_16;
	inf.bs[16] = T_17;
	inf.bs[17] = T_18;
	inf.bs[18] = T_19;
	get_bs(inf, argc, argv);
	return (0);
}
