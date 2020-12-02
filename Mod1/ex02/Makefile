NAME	=	Zombiebrains
SRCS	=	Zombie.cpp ZombieEvent.cpp main.cpp
OBJS	=	${SRCS:.cpp=.o}
GCC		=	clang++
FLAGS	=	-Werror -Wextra -Wall -std=c++98
HDRS	=	Zombie.hpp ZombieEvent.hpp

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