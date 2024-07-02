# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarlucc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 17:09:23 by scarlucc          #+#    #+#              #
#    Updated: 2024/03/24 19:49:21 by scarlucc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


SRCS = numbers.c words.c ft_printf.c 

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

HEADER = ft_printf.h

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c ${HEADER}
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:	all clean fclean re