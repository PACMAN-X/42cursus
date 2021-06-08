# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 20:43:31 by taeskim           #+#    #+#              #
#    Updated: 2021/06/09 02:03:17 by pac-man          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a

SRCS_PATH    = srcs/

LIBFT_PATH    = libft/

LIBFT_LIB    = libft.a

SRCS_FILES = \
	./srcs/ft_printf.c \
	./srcs/ft_format_handler.c \
	./srcs/ft_format_handler_flag.c \
	./srcs/ft_format_specifier.c \
	./srcs/ft_format_handler_digit.c \
	./srcs/ft_format_completer_diu.c \
	./srcs/ft_format_completer_c.c \
	./srcs/ft_format_completer_s.c \
	./srcs/ft_frame_setter.c	\
	./srcs/ft_pad_setter.c		\
	./srcs/ft_format_completer_per.c \
	./srcs/ft_format_completer_p.c	\
	./srcs/ft_format_completer_null.c \
	./srcs/ft_format_completer_xX.c \
	./srcs/ft_base_getter.c			\

SRCS_OBJS     = ${SRCS_FILES:.c=.o}

CC         = gcc

CFLAGS         = -Wall -Wextra -Werror

RM         = rm -f

AR         = ar crs

LIBFT_OBJS    = ${LIBFT_PATH}*.o

LIBFTMAKE    = $(MAKE) -C ${LIBFT_PATH}

all:				${NAME}

${NAME}:    ${SRCS_OBJS} pmake
			${AR} ${NAME} ${SRCS_OBJS} ${LIBFT_OBJS}
			gcc main.c ${NAME}

pmake:
			${LIBFTMAKE}

clean:
			make -C ${LIBFT_PATH} clean
			${RM} ${SRCS_OBJS}

fclean: 	clean
			${RM} ${NAME} ${LIBFT_PATH}${LIBFT_LIB} a.out

re:         fclean all

.PHONY:        all clean fclean re