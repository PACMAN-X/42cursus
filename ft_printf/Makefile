# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 20:43:31 by taeskim           #+#    #+#              #
#    Updated: 2021/06/14 17:06:26 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

NAME		= ./libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a

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
	./ft_format_handler_flag_p.c

OBJS		= $(SRCS:.c=.o)
INCS		= ./

EXEC = exec

%.o : %.c
	$(CC) $(CFLAGS) -c $? -o $@

$(NAME) : $(OBJS)
	$(MAKE) -C libft
	ar src $@ $?

$(EXEC) :
	gcc -o exec_name main.c libftprintf.a libft/libft.a

all : $(NAME)

fclean : clean
	rm -f $(NAME)
	$(MAKE) fclean -C libft

clean :
	rm -f $(OBJS)
	$(MAKE) clean -C libft

re : fclean all

.POHNY : all fclean clean re