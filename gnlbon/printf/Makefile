# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 08:04:12 by julrober          #+#    #+#              #
#    Updated: 2022/11/11 08:52:55 by julrober         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

AR = ar
ARFLAGS = crs

CC = gcc
CFLAG = -Wall -Wextra -Werror

RM = rm
RMFLAG = -f

INCLUDES = ./libft.h

OBJS = $(SRCS:.c=.o)

all : $(NAME)

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

.c.o : $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: all clean fclean re
