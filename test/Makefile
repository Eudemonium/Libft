CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.. -Iincludes/
LIB = -L.. -lft
SRC_DIR = srcs/
OPTION = -o
OUTPUT = test_output
FUNC := ft_atoi
FUNC += ft_isalpha
FUNC += ft_isalnum
FUNC += ft_isascii
NAME := $(addsuffix _test,$(FUNC))

all: $(NAME)
	for func in $(NAME); do ./$$func >> $(OUTPUT); done

$(NAME): mv_c
	$(CC) $(CFLAGS) $(LIB) $(INCLUDES) $(OPTION) $@ $(SRC_DIR)$@.c

$(FUNC):
	make $@_test

clean:
	/bin/rm -f $(OUTPUT)

fclean: clean
	/bin/rm -f $(NAME) 

mv_c:
	for file in $(NAME); \
	do if [ -f $(SRC_DIR)$$file.c_test ]; \
	then mv $(SRC_DIR)$$file.c_test $(SRC_DIR)$$file.c; \
	fi; done

mv_test:
	for file in $(NAME); \
	do if [ -f $(SRC_DIR)$$file.c ]; \
	then mv $(SRC_DIR)$$file.c $(SRC_DIR)$$file.c_test; \
	fi; done
