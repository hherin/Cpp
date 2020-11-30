NAME=	megaphone
SRCS=	megaphone.cpp
GCC=	clang++
FLAGS=	-Werror -Wextra -Wall -std=c++98
OBJS=	${SRCS:.cpp=.o}
# HDRS:

all	:		${NAME}

${NAME}	:	${OBJS}
			${GCC} ${FLAGS} -o ${NAME} ${OBJS}


# ${OBJS}	:	${HDRS}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
				rm -rf ${NAME}

re	:		fclean all

.PHONY:	all clean fclean re

%.o	:		%.cpp
			${GCC} ${FLAGS} -o $@ -c $<