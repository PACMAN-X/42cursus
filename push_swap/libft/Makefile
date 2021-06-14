# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 13:36:10 by taeskim           #+#    #+#              #
#    Updated: 2021/06/14 13:36:50 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

NAME = libft.a

RM = rm -rf

SRCS = \
	ft_isdigit.c \

SRCS_OBJS = ${SRCS:%.c=%.o}

${NAME}: ${SRCS_OBJS}
	${CC} ${CFLAGS} $^ -o $@

all : ${NAME}

clean : 
	${RM} ${SRCS_OBJS} ${NAME}

re : clean all

.PHONY = all clean re