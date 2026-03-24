
CC = gcc
CFLAGS = -Wall -Wextra

SRC = main.c node.c stack.c
OBJ = $(SRC:.c=.o)
EXE = stack

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -lm

clean:
	rm -f $(EXE) $(OBJ)

