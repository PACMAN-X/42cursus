# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 17:34:41 by taeskim           #+#    #+#              #
#    Updated: 2021/06/11 16:28:54 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC =	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_putchar.c	\
		ft_itoa.c		\
		ft_strdup.c		\
		ft_strlen.c		\
		ft_calloc.c		\
		ft_memset.c		\
		ft_strjoin.c	\
		ft_strlcpy.c	\
		ft_putstr_fd.c  \
		ft_uitoa.c		\

OBJS = $(SRCS:.c=.o)
INCLUDE = -I ./libft.h

all : $(NAME)

%.o : %.c
	$(GCC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $@ $^

clean : 
	rm -f $(OBJS)

fclean : 
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus