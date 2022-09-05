# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 19:00:01 by bonkim            #+#    #+#              #
#    Updated: 2022/08/30 11:23:52 by bonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = ft_printf.c print_simple.c print_hexa.c print_utils.c
INCDIR = ./includes/
NAME = libftprintf.a
LIBNAME = libft.a
LIBDIR = ./libft/
OBJS = $(SRCS:.c=.o)
RM = rm -f

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBDIR)
	cp $(LIBDIR)$(LIBNAME) $(NAME)
	ar rc $@ $(OBJS)

all: $(NAME)

%o : %c
	$(CC) $(CFLAGS) $< -o $@ -I $(INCDIR)

clean:
		$(RM) $(OBJS)
		$(MAKE) -C $(LIBDIR) clean

fclean: clean
		$(RM) $(NAME)
		$(RM) $(LIBDIR)$(LIBNAME)

re: fclean all

.PHONY: all bonus clean fclean re
