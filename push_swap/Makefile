# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 12:29:05 by taeskim           #+#    #+#              #
#    Updated: 2021/06/14 17:57:35 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

NAME = push_swap

RM = rm -rf

LIB = ./libft/libft.a

SRCS = \
	validator_num.c \

SRCS_OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} ${CFLAGS} -c $? -o $@

${NAME}: ${SRCS_OBJS}
	${MAKE} -C libft
	ar src $@ $?

exec : all
	${CC} -o push_swap main.c ${NAME} ${LIB}

all : ${NAME}

clean : 
	${RM} ${SRCS_OBJS}
	${MAKE} clean -C libft

fclean : clean
	${RM} ${NAME}
	${MAKE} fclean -C libft

re : clean all

.PHONY = all clean fclean re
