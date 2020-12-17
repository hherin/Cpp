NAME	=	28B

SRCS	=	PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Form.cpp \
			Bureaucrat.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

HDRS	=	PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp \
			Form.hpp \
			Bureaucrat.hpp

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
			rm *_shrubbery

fclean	:	clean
			rm -rf ${NAME}

re	:		fclean all

.PHONY:	all clean fclean re