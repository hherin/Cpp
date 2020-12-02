NAME	=	attack

SRCS	=	Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	Weapon.hpp HumanA.hpp HumanB.hpp

GCC		=	clang++

FLAGS	=	-Werror -Wextra -Wall -std=c++98

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