/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_term.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:20:11 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/06 16:14:06 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_line(char **line, int n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = *line;
	*line = ft_strjoin(*line, "\n");
	free(tmp);
	tmp = *line;
	if (tmp[0] == '\n' && n != 4)
		return (1);
	else if (tmp[0] == '\n')
		return (0);
	while (tmp[i] != '\n')
	{
		if (tmp[i] != '#' && tmp[i] != '.')
			return (1);
		i++;
	}
	if (i != 4)
		return (1);
	return (0);
}

int		check_blocks(char **tetr)
{
	int		i;
	int		len;

	len = ft_strlen(*tetr);
	if (len % 21 != 0)
		return (1);
	i = 0;
	while (tetr[0][i] != '\0')
	{
		len = 0;
		while ((i + 1) % 21 != 0)
		{
			if (tetr[0][i] == '#')
				len++;
			i++;
		}
		if (len != 4)
			return (1);
		i++;
	}
	return (0);
}

int		get_term(int fd, char **tetr)
{
	char	*line;
	char	*tmp;
	int		i;

	i = 0;
	while (get_next_line(fd, &line) == 1)
	{
		if (check_line(&line, i))
			return (1);
		i++;
		if (i == 5)
			i = 0;
		tmp = *tetr;
		if (!(*tetr = ft_strjoin(*tetr, line)))
			return (1);
		free(line);
		free(tmp);
	}
	tmp = *tetr;
	if (!(*tetr = ft_strjoin(*tetr, "\n")))
		return (1);
	free(tmp);
	if (check_blocks(tetr))
		return (1);
	return (0);
}
