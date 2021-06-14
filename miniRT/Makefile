CC = gcc

CFLAGS = -Werror -Wall -Wextra

NAME = a.out

SRCS = \
	calendar.c \
	memo.c	\
	main.c \

SRCS_OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME}: ${SRCS_OBJS}
	${CC} ${CFLAGS} $^ -o $@

clean:
	rm -rf ${SRCS_OBJS} ${NAME}

re: clean all

.PHONY = all clean re