# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcaquard <fcaquard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/18 16:59:51 by fcaquard          #+#    #+#              #
#    Updated: 2021/07/20 22:40:12 by fcaquard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCMANDATORY =			\
	ft_printf.c			\
	ft_printf_utils.c	\
	ft_printf_csdiXx.c	\

MANDATORY = $(SRCMANDATORY:.c=.o)

all : $(NAME)

$(NAME): $(MANDATORY)
	ar rs $(NAME) $(MANDATORY)

clean:
	rm -f *.o

fclean: clean
	rm -f ./$(NAME)

re: fclean all
