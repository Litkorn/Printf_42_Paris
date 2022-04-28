# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/27 23:04:47 by cleibeng          #+#    #+#              #
#    Updated: 2022/04/26 13:56:52 by cleibeng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c\
	   ft_put_strchar.c\
	   ft_putnbr_base.c\
	   ft_strlen.c\

OBJS = ${SRCS:.c=.o}

CC = gcc
FLAGS = -Wall -Wextra -Werror

all:	${NAME}

%.o: %.c
	${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
		ar -rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
