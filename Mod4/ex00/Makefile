NAME	= Sorcerer

SRCS	=	Sorcerer.cpp Victim.cpp Peon.cpp main.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	Sorcerer.hpp Victim.hpp Peon.hpp

GCC		=	clang++

FLAGS	=	-Werror -Wextra -Wall -std=c++98

all	:		${NAME}

${NAME}	:	${OBJS}
			${GCC} ${FLAGS} -o ${NAME} ${OBJS} -g3 -fsanitize=address

%.o	:		%.cpp
			${GCC} ${FLAGS} -o $@ -c $< -g3 -fsanitize=address

${OBJS}	:	${HDRS}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

re		:	fclean all

.PHONY:	all clean fclean re