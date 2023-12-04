# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thomvan- <thomvan-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 14:43:36 by thomvan-          #+#    #+#              #
#    Updated: 2023/12/04 17:45:23 by thomvan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strchr.c\
	ft_printf.c\
	ft_puthex.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_puthexl.c\
	ft_putun.c
	
OBJS	= ${SRCS:.c=.o}

includes= ft_printf.h

RM 		= rm -f

NAME	= libftprintf.a

CC		= gcc

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

FLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS} ${includes}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re