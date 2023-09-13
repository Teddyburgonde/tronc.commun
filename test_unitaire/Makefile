CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

all: test_my_function

test_my_function: test_my_function.c ft_isalnum.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f test_my_function

.PHONY: clean
