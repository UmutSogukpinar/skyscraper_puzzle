NAME = program

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

UTIL_DIR = ./utils
CHECK_DIR = ./check

SOURCES = 	main.c \
			$(UTIL_DIR)/util_one.c $(UTIL_DIR)/parse.c \
			$(CHECK_DIR)/check_args.c \

all: $(NAME)

$(NAME) : $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

clean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re

