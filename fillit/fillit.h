/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:06:57 by mmajikth          #+#    #+#             */
/*   Updated: 2019/12/06 16:51:55 by mmajikth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <string.h>

# define T_1 (int [8]) {0,0,0,1,1,0,1,1}
# define T_2 (int [8]) {0,0,1,0,2,0,3,0}
# define T_3 (int [8]) {0,0,0,1,0,2,0,3}
# define T_4 (int [8]) {0,0,1,-1,1,0,1,1}
# define T_5 (int [8]) {0,0,1,0,1,1,2,0}
# define T_6 (int [8]) {0,0,0,1,0,2,1,1,}
# define T_7 (int [8]) {0,0,0,1,1,0,2,0,}
# define T_8 (int [8]) {0,0,0,1,0,2,1,2}
# define T_9 (int [8]) {0,0,1,-1,1,0,2,0}
# define T_10 (int [8]) {0,0,1,0,1,1,2,1}
# define T_11 (int [8]) {0,0,0,1,1,-1,1,0}
# define T_12 (int [8]) {0,0,1,-1,1,0,2,-1}
# define T_13 (int [8]) {0,0,0,1,1,1,1,2}
# define T_14 (int [8]) {0,0,1,0,2,0,2,1}
# define T_15 (int [8]) {0,0,0,1,0,2,1,0}
# define T_16 (int [8]) {0,0,0,1,1,1,2,1}
# define T_17 (int [8]) {0,0,1,-2,1,-1,1,0}
# define T_18 (int [8]) {0,0,1,0,2,-1,2,0}
# define T_19 (int [8]) {0,0,1,0,1,1,1,2}

# define WHOLE_TETR inf.bs

typedef struct	s_fig
{
	int			i;
	int			j;
	int			fign;
	int			*a;
	int			**bs;
}				t_fig;

int				get_term(int fd, char **tetr);
int				normalize(char *tetr, int *ar);
int				*return_arr(char *tetr, int len, t_fig inf);
char			**gen_field(int num);
void			print_field(char **field);
int				ft_minsqrt(int num);
int				solve(char **field, int len, int size, t_fig inf);
int				check_max(t_fig inf, int size, int i, int j);
void			free_field(char **field);

#endif
