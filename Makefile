# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 11:55:27 by ijmari            #+#    #+#              #
#    Updated: 2021/11/24 11:55:28 by ijmari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = voidp_handling.c ft_printf.c ft_printf_utils.c

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h
CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re