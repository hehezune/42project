# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bonkim <bonkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 14:47:11 by bonkim            #+#    #+#              #
#    Updated: 2022/05/04 21:54:23 by bonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SDIR = srcs
IDIR = includes
NAME = libft.a
SRC = $(SDIR)/ft_putchar.c $(SDIR)/ft_putstr.c $(SDIR)/ft_strcmp.c $(SDIR)/ft_strlen.c $(SDIR)/ft_swap.c
OBJECTS = $(SRC:.c=.o)

$(NAME): $(OBJECTS)
	ar rc $@ $(OBJECTS)

%o : %c
	$(CC) $(CFLAGS) $< -o $@ -I $(IDIR)

all: $(NAME)

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
