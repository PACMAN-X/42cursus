# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 12:29:05 by taeskim           #+#    #+#              #
#    Updated: 2021/06/14 15:00:21 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

NAME = push_swap

RM = rm -rf

SRCS = \
	validator.c \
	main.c \

SRCS_OBJS = ${SRCS:%.c=%.o}

${NAME}: ${SRCS_OBJS}
	${CC} ${CFLAGS} $^ -o $@

all : ${NAME}

clean : 
	${RM} ${SRCS_OBJS} ${NAME}

re : clean all

.PHONY = all clean re
