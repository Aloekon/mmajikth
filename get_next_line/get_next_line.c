/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:24:35 by mmajikth          #+#    #+#             */
/*   Updated: 2019/11/26 19:43:15 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		line_copy(char **line, char *content, char c)
{
	int		i;

	i = 0;
	while (content[i] && content[i] != c)
		i++;
	if (!(*line = ft_strndup(content, i)))
		return (0);
	return (i);
}

t_list	*get_fd(int fd, t_list **list)
{
	t_list	*tmp;

	if (!list)
		return (NULL);
	tmp = *list;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(list, tmp);
	return (tmp);
}

int		my_read(const int fd, char **content)
{
	int		ret;
	char	*tmp;
	char	buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		tmp = *content;
		if (!(*content = ft_strjoin(*content, buf)))
			return (-1);
		free(tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	size_t			ret;
	static t_list	*list;
	t_list			*curr;
	char			*tmp;

	if (fd < 0 || !line || (read(fd, buf, 0)) < 0 ||
			(!(curr = get_fd(fd, &list))))
		return (-1);
	tmp = curr->content;
	ret = my_read(fd, &tmp);
	curr->content = tmp;
	if (!ret && !*tmp)
		return (0);
	ret = line_copy(line, curr->content, '\n');
	tmp = curr->content;
	if (tmp[ret] != '\0')
	{
		curr->content = ft_strdup(&((curr->content)[ret + 1]));
		free(tmp);
	}
	else
		tmp[0] = '\0';
	return (1);
}
