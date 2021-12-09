CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.. -I$(INCL_DIR)
INCL_DIR = includes/
HEADER = libft_test.h
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
FUNC += ft_memalloc
FUNC += ft_memccpy
FUNC += ft_memchr
FUNC += ft_memcmp
FUNC += ft_memcpy
FUNC += ft_memmove
FUNC += ft_memset
FUNC += ft_strcat
FUNC += ft_strchr
FUNC += ft_strdup
FUNC += ft_strlen
FUNC += ft_strncpy
FUNC += ft_strrchr
FUNC += ft_tolower
FUNC += ft_toupper
FUNC += ft_putnbr_fd
FUNC += ft_strlcat



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
	if [ -f $(INCL_DIR)$(HEADER).test ]; \
	then mv $(INCL_DIR)$(HEADER).test $(INCL_DIR)$(HEADER); \
	fi; 

mv_test:
	for file in $(SRCS); \
	do if [ -f $$file ]; \
	then mv $$file $${file}.test; \
	fi; done 
	if [ -f $(INCL_DIR)$(HEADER) ]; \
	then mv $(INCL_DIR)$(HEADER) $(INCL_DIR)$(HEADER).test; \
	fi;

re: fclean all

.PHONY: all mv_c mv_test clean fclean re