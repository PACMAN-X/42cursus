# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 20:43:31 by taeskim           #+#    #+#              #
#    Updated: 2021/06/14 15:40:49 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

NAME		= ./libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS_LIBFT =	\
		./${LIBFT}/ft_isalpha.c		\
		./${LIBFT}/ft_isdigit.c		\
		./${LIBFT}/ft_putchar.c		\
		./${LIBFT}/ft_itoa.c		\
		./${LIBFT}/ft_strdup.c		\
		./${LIBFT}/ft_strlen.c		\
		./${LIBFT}/ft_calloc.c		\
		./${LIBFT}/ft_memset.c		\
		./${LIBFT}/ft_strjoin.c		\
		./${LIBFT}/ft_strlcpy.c		\
		./${LIBFT}/ft_putstr_fd.c  	\
		./${LIBFT}/ft_uitoa.c		\

OBJS_LIBFT = ${SRCS_LIBFT:.c=.o}

SRCS = \
	./ft_printf.c					\
	./ft_format_handler.c			\
	./ft_format_handler_flag.c		\
	./ft_format_specifier.c			\
	./ft_format_handler_digit.c		\
	./ft_format_completer_diu.c		\
	./ft_format_completer_c.c		\
	./ft_format_completer_s.c		\
	./ft_frame_setter.c				\
	./ft_pad_setter.c				\
	./ft_format_completer_per.c		\
	./ft_format_completer_px.c		\
	./ft_base_getter.c				\
	./ft_format_handler_flag_p.c	\

OBJS		= $(SRCS:.c=.o)
INCS		= ./

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME) : $(OBJS) $(OBJS_LIBFT)
	ar rc $(LIBFT)/$(LIBFT_LIB) $(OBJS_LIBFT)
	ar rc $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	rm -f $(NAME)
	rm -f $(LIBFT)/$(LIBFT_LIB)

clean :
	rm -f $(OBJS)
	rm -f $(OBJS_LIBFT)

re : fclean all

.POHNY : all fclean clean re