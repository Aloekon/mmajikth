# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/02 13:05:50 by mmajikth          #+#    #+#              #
#    Updated: 2019/12/04 15:29:40 by mmajikth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fillit

CC = gcc

INCLUDE = fillit.h 

FLAGS = -Wall -Wextra -Werror

SRC = main.c check_term.c iden_tetr.c field.c

OBJ = main.o check_term.o iden_tetr.o field.o

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDE)
		$(CC) -o $(NAME) $(OBJ) -I $(INCLUDE) -L libft/ -lft
clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all