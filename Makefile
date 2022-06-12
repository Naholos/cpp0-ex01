# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoteo-be <aoteo-be@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:05:27 by aoteo-be          #+#    #+#              #
#    Updated: 2022/05/31 19:05:27 by aoteo-be         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		= clang++

CXXFLAGS	= -Wall -Wextra -Werror

NAME		= contactsbook

SRCS		= Contact.cpp main.cpp

OBJS		= ${SRCS:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean make re
