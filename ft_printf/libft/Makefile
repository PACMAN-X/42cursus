# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 17:34:41 by taeskim           #+#    #+#              #
#    Updated: 2021/06/04 22:00:30 by pac-man          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = ./

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

OBJS =	$(SRC:.c=.o)

NAME =	libft.a

CC =	gcc

RM =	rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME) :
	$(CC) $(CFLAGS) $(SRC) -c -I$(INCLUDES)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all