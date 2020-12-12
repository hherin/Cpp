NAME	=	Bocal

SRCS	=	main.cpp MateriaSource.cpp Character.cpp Ice.cpp AMateria.cpp Cure.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	Ice.hpp Cure.cpp AMateria.hpp ICharacter.hpp IMateriaSource.hpp

GCC		=	clang++

FLAGS	=	-Werror -Wextra -Wall -std=c++98 -g3 -fsanitize=address

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

re	:		fclean all

.PHONY:	all clean fclean re