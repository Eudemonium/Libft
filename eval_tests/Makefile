CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.. -I$(INCL_DIR)
INCL_DIR = includes/
HEADER = $(INCL_DIR)libft_test.h
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
FUNC += ft_memdel
FUNC += ft_memmove
FUNC += ft_memset
FUNC += ft_strcat
FUNC += ft_strchr
FUNC += ft_strclr
FUNC += ft_strcmp
FUNC += ft_strcpy
FUNC += ft_strdel
FUNC += ft_strdup
FUNC += ft_strequ
FUNC += ft_striter
FUNC += ft_striteri
FUNC += ft_strjoin
FUNC += ft_strlcat
FUNC += ft_strlen
FUNC += ft_strmap
FUNC += ft_strmapi
FUNC += ft_strncat
FUNC += ft_strncmp
FUNC += ft_strncpy
FUNC += ft_strnequ
FUNC += ft_strnew
FUNC += ft_strnstr
FUNC += ft_strsub
FUNC += ft_strtrim
FUNC += ft_strrchr
FUNC += ft_strsplit
FUNC += ft_strstr
FUNC += ft_tolower
FUNC += ft_toupper
FUNC += ft_putchar
FUNC += ft_putchar_fd
FUNC += ft_putendl
FUNC += ft_putendl_fd
FUNC += ft_putnbr
FUNC += ft_putnbr_fd
FUNC += ft_putstr
FUNC += ft_putstr_fd

SRCS := $(addprefix $(SRC_DIR)test_,$(FUNC))
SRCS := $(addsuffix .c,$(SRCS))
SRCS += $(SRC_DIR)test_libft.c

BONUS = test_bonus
SRCS_B += $(SRC_DIR)test_ft_max.c
SRCS_B += $(SRC_DIR)test_ft_pow.c
SRCS_B += $(SRC_DIR)test_ft_intlen.c
SRCS_B += $(SRC_DIR)test_ft_isspace.c
SRCS_B += $(SRC_DIR)test_ft_strccpy.c
SRCS_B += $(SRC_DIR)test_libftbonus.c

OUTPUT_DIR = output/
OUTPUT := ft_putchar
OUTPUT += ft_putchar_fd
OUTPUT += ft_putendl
OUTPUT += ft_putendl_fd
OUTPUT += ft_putnbr
OUTPUT += ft_putnbr_fd
OUTPUT += ft_putstr
OUTPUT += ft_putstr_fd
OUTPUT := $(addprefix $(OUTPUT_DIR),$(OUTPUT))

all: $(NAME) $(BONUS)

$(NAME): mv_c
	$(CC) $(CFLAGS) $(LIB) $(INCLUDES) $(OPTION) $(NAME) $(SRCS)

clean:
	for file in $(OUTPUT); \
	do > $${file}; done

fclean: clean
	/bin/rm -f $(NAME) $(BONUS)

$(BONUS): mv_c
	$(CC) $(CFLAGS) $(LIB) $(INCLUDES) $(OPTION) $(BONUS) $(SRCS_B)

mv_c:
	for file in $(SRCS) $(SRCS_B); \
	do if [ -f $${file}.test ]; \
	then mv $${file}.test $$file; \
	fi; done 
	if [ -f $(HEADER).test ]; \
	then mv $(HEADER).test $(HEADER); \
	fi; 

mv_test:
	for file in $(SRCS) $(SRCS_B); \
	do if [ -f $$file ]; \
	then mv $$file $${file}.test; \
	fi; done 
	if [ -f $(HEADER) ]; \
	then mv $(HEADER) $(HEADER).test; \
	fi;

re: fclean all

.PHONY: all mv_c mv_test clean fclean re