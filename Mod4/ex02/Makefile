NAME	=	Squad

SRCS	=	AssaultTerminator.cpp TacticalMarine.cpp Squad.cpp main.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	AssaultTerminator.hpp TacticalMarine.hpp ISpaceMarine.hpp ISquad.hpp Squad.hpp

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