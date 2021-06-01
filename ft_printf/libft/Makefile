# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeskim <taeskim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 17:34:41 by taeskim           #+#    #+#              #
#    Updated: 2021/06/01 22:08:20 by taeskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = ./

SRC =	ft_isalpha.c	\
		ft_isdigit.c	\
		ft_putchar.c	\
		ft_itoa.c		\

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