# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jagagas <jagagas@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 10:52:56 by jagagas           #+#    #+#              #
#    Updated: 2022/02/21 08:17:46 by jagagas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS := ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_del.c
SRCS += ft_intlen.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_isspace.c
SRCS += ft_itoa.c
SRCS += ft_max.c
SRCS += ft_min.c
SRCS += ft_memalloc.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memdel.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_pow.c
SRCS += ft_putchar_fd.c
SRCS += ft_putchar.c
SRCS += ft_putendl_fd.c
SRCS += ft_putendl.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putnbr.c
SRCS += ft_putstr_fd.c
SRCS += ft_putstr.c
SRCS += ft_sizemax.c
SRCS += ft_sizemin.c
SRCS += ft_strcat.c
SRCS += ft_strchr.c
SRCS += ft_strccpy.c
SRCS += ft_strclr.c
SRCS += ft_strcmp.c
SRCS += ft_strcpy.c
SRCS += ft_strdel.c
SRCS += ft_strnew.c
SRCS += ft_strdup.c
SRCS += ft_strequ.c
SRCS += ft_striter.c
SRCS += ft_striteri.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlen.c
SRCS += ft_strmap.c
SRCS += ft_strmapi.c
SRCS += ft_strncat.c
SRCS += ft_strncmp.c
SRCS += ft_strncpy.c
SRCS += ft_strnequ.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strsplit.c
SRCS += ft_strstr.c
SRCS += ft_strsub.c
SRCS += ft_strtrim.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c
SRCS += ft_lstnew.c
SRCS += ft_lstdelone.c
SRCS += ft_lstdel.c
SRCS += ft_lstadd.c
SRCS += ft_lstaddback.c
SRCS += ft_lstiter.c
SRCS += ft_lstmap.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re