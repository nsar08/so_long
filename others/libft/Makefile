# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 09:46:07 by nsar              #+#    #+#              #
#    Updated: 2021/10/18 11:32:13 by nsar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAG = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isprint.c ft_isascii.c ft_memmove.c ft_memcpy.c ft_strlen.c ft_bzero.c ft_memset.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_strrchr.c	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)	

all: $(NAME)	
$(NAME): $(OBJ)	
	ar rcs $(NAME) $(OBJ)	
%.o: %.c
	$(CC) $(FLAG) -o $@ -c $<	
clean:
	rm -f *.o
fclean:	clean
	rm -f $(NAME)
re: fclean all

