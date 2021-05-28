# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 20:43:31 by taeskim           #+#    #+#              #
#    Updated: 2021/05/28 21:50:56 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

SRCS_PATH = srcs/

LIBFT_PATH = libft/

LIBFT_LIB = libft.a

HEADERS_FOLDER = includes/

SRCS_FILES = \
	./srcs/ft_printf.c \
	./srcs/ft_flag_completer.c \
	./srcs/ft_space.c \

SRCS_OBJS = $(SRCS_FILES:.c:.o)

CC = gcc

CFLAGS = -Wall -Werror - Wextra

RM = rm -f

AR = ar -rcs

LIBFT_OBJS = ${LIBFT_PATH}*.o

LIBFTMAKE    = $(MAKE) -C ${LIBFT_PATH}

all:				${NAME}

${NAME}:    ${SRCS_OBJS} pmake
			${AR} ${NAME} ${SRCS_OBJS} ${LIBFT_OBJS}

pmake:
			${LIBFTMAKE}

clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${SRCS_OBJS}

fclean: 	clean
			${RM} ${NAME} ${LIBFT_PATH}${LIBFT_LIB} a.out

re:         fclean all

f:
	gcc main.c $(NAME)

.PHONY:        all clean fclean re