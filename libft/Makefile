# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bonkim <bonkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 14:47:11 by bonkim            #+#    #+#              #
#    Updated: 2022/08/07 18:30:55 by bonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = ft_atoi.c  ft_isalpha.c ft_bzero.c ft_memset.c ft_strdup.c\
		ft_isdigit.c  ft_calloc.c ft_itoa.c ft_memchr.c ft_memcmp.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_strchr.c ft_strncmp.c \
		 ft_striteri.c   ft_strnstr.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strrchr.c  ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcat.c\
		ft_strmapi.c ft_substr.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_split.c ft_memmove.c ft_memcpy.c ft_strlcpy.c ft_strjoin.c ft_strtrim.c\

BNS_SRCS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstsize.c ft_lstdelone.c \
			ft_lstlast.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
NAME = libft.a
LIBC_OBJS = $(SRCS:.c=.o)
BNS_OBJS = $(BNS_SRCS:.c=.o)

ifdef WITH_BNS
	OBJS = $(LIBC_OBJS) $(BNS_OBJS)
else
	OBJS = $(LIBC_OBJS)
endif

all: $(NAME)

bonus:
	make WITH_BNS=1 all

$(NAME): $(OBJS)
	ar rc $@ $(OBJS)


%o : %c
	$(CC) $(CFLAGS) $< -o $@ -I./

clean:
		rm -f $(LIBC_OBJS) $(BNS_OBJS)

fclean: clean

		rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
