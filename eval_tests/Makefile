CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.. -Iincludes/
LIB = -L.. -lft
SRC_DIR = srcs/
OPTION = -o
NAME = test_libft
FUNC := ft_atoi
FUNC += ft_bzero
FUNC += ft_isalnum
FUNC += ft_isalpha
FUNC += ft_isascii
FUNC += ft_isdigit
FUNC += ft_isprint
FUNC += ft_itoa
FUNC += ft_memccpy
FUNC += ft_memset
FUNC += ft_strcat
FUNC += ft_strchr
FUNC += ft_strlen
FUNC += ft_strncpy
FUNC += ft_strrchr
FUNC += ft_tolower
FUNC += ft_toupper


SRCS := $(addprefix $(SRC_DIR)test_,$(FUNC))
SRCS := $(addsuffix .c,$(SRCS))
SRCS += $(SRC_DIR)test_libft.c

all: $(NAME)

$(NAME): mv_c
	$(CC) $(CFLAGS) $(LIB) $(INCLUDES) $(OPTION) $(NAME) $(SRCS)

clean:

fclean: clean
	/bin/rm -f $(NAME) 

mv_c:
	for file in $(SRCS); \
	do if [ -f $${file}.test ]; \
	then mv $${file}.test $$file; \
	fi; done

mv_test:
	for file in $(SRCS); \
	do if [ -f $$file ]; \
	then mv $$file $${file}.test; \
	fi; done

re: fclean all

.PHONY: all mv_c mv_test clean fclean re