CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu99
SRC = builtin.c loop_func.c real_func.c signal.c store.c str.c str1.c shell.c
EXEC = simple_shell

all:
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)
