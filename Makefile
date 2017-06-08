# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecloete <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/06 10:50:25 by ecloete           #+#    #+#              #
#    Updated: 2017/06/06 11:41:35 by ecloete          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CFLAGS = -Wall -Werror -Wextra

HEADER = ./libft.h

SRC = ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	  ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	  ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \

OBJ = ft_bzero.o ft_memcpy.o \
	  ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
	  ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o \
	  ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o \
	  ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c -I $(SRC)
	ar rc $(NAME) $(OBJ) $(HEADER)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re : fclean all
