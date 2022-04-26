# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 14:35:45 by nsar              #+#    #+#              #
#    Updated: 2022/04/07 18:19:15 by nsar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror -g -fsanitize=address
INCLUDE		= -I./others/libft -I$(PRINTF_LIB)/include -I./mlx
OPTIONS 	= -Lmlx  -lmlx -L$(LBFT_PATH) $(PRINTF_LIB)/libftprintf.a -framework OpenGL -framework AppKit
NAME		= so_long
LBFT_PATH = ./others/libft/
PRINTF_LIB	= ./others/printf/


SRCS	=  srcs/main.c\
		  srcs/check_map.c\
		  srcs/draw_player.c\
		  srcs/get_next_line.c\
		  srcs/move_player.c\
		  srcs/draw_map.c\
		  srcs/draw_map2.c\
		  srcs/load_map.c\
		  srcs/move_check.c\
		  srcs/put_images.c\
		  srcs/utils.c\
		  
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	make -C $(PRINTF_LIB)
	$(CC) $(CFLAGS) $(INCLUDE) $(OPTIONS) -o $(NAME) $(OBJECTS)
%o:		%.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@
clean:
	rm -f $(OBJECTS)
	make clean -C $(PRINTF_LIB)

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(PRINTF_LIB)

re: fclean all

.PHONY: all clean fclean re
