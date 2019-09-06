# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmajikth <mmajikth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 17:31:47 by mmajikth          #+#    #+#              #
#    Updated: 2019/09/06 17:31:47 by mmajikth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

INCLUDE = ./includes

FLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
srcs/ft_strlen.c srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDES)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all