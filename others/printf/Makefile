# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 14:28:15 by nsar              #+#    #+#              #
#    Updated: 2022/04/06 17:49:43 by nsar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./../libft


NAME = libftprintf.a

SRCS = ft_printf.c \
	   srcs/ft_treatment.c \
	   srcs/ft_treat_width.c \
	   srcs/ft_u_itoa.c \
	   srcs/ft_ull_base.c \
	   srcs/ft_putchar.c \
	   srcs/ft_str_tolower.c \
	   srcs/ft_putstrprec.c \
	   srcs/ft_treat_string.c \
	   srcs/ft_treat_char.c \
	   srcs/ft_treat_pointer.c \
	   srcs/ft_treat_int.c \
	   srcs/ft_treat_uint.c \
	   srcs/ft_treat_percent.c \
	   srcs/ft_treat_hexa.c \
	   srcs/ft_treat_flags.c

SURPL_O= ft_treat_width.o \
		 ft_treatment.o \
		 ft_treat_width.o \
		 ft_u_itoa.o \
		 ft_ull_base.o \
		 ft_putchar.o \
		 ft_str_tolower.o \
		 ft_putstrprec.o \
		 ft_treat_string.o \
		 ft_treat_char.o \
		 ft_treat_pointer.o \
		 ft_treat_int.o \
		 ft_treat_uint.o \
		 ft_treat_percent.o \
		 ft_treat_hexa.o \
		 ft_treat_flags.o
CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

bonus : $(NAME)
all : $(NAME)

clean :
	make clean -C $(LIBFT)
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	make fclean -C $(LIBFT)
	rm -rf $(NAME)

re : fclean all
