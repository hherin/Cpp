NAME	=	phonebook
SRCS	=	main.cpp phonebook.cpp
GCC		=	clang++
FLAGS	=	-Werror -Wextra -Wall -std=c++98
OBJS	=	${SRCS:.cpp=.o}
HDRS	=	#phonebook.hpp

all		:	${NAME}

${NAME}	:	${OBJS}
			${GCC} ${FLAGS} -o ${NAME} ${OBJS}

%.o		:	%.cpp
			${GCC} ${FLAGS} -o $@ -c $<

${OBJS}	:	${HDRS}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -rf ${NAME}

re	:		fclean all

.PHONY:	all clean fclean re