# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehayes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/15 19:50:36 by ehayes            #+#    #+#              #
#    Updated: 2018/12/16 15:09:08 by ehayes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CFLAGS += -Wall -Wextra -Werror -Iinclude/

SRCS = ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strncpy.c \
				ft_isascii.c \
				ft_memdel.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strequ.c \
				ft_strnequ.c 
OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
