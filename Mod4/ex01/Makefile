NAME	=	WorldOnFire

SRCS	=	Character.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp SuperMutant.cpp RadScorpion.cpp Enemy.cpp main.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	Character.hpp AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp SuperMutant.hpp RadScorpion.hpp Enemy.hpp

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