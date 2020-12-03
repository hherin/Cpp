NAME	=	replace

SRCS	=	main.cpp fileChecker.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	fileChecker.hpp

GCC		=	clang++

FLAGS	=	-Werror -Wextra -Wall -std=c++98 -g3 -fsanitize=address

all	:		${NAME}

${NAME}	:	${OBJS}
			${GCC} ${FLAGS} -o ${NAME} ${OBJS}

%.o	:		%.cpp
			${GCC} ${FLAGS} -o $@ -c $<

${OBJS}	:	${HDRS}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

re	:		fclean all

.PHONY:	all clean fclean re