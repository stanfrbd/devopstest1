CC = gcc
CFLAGS = -std=c99 -Wall -Werror -Wextra -pedantic
OBJ = test.o
BIN = test

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN)
	./$(BIN)

clean:
	$(RM) -rf $(BIN) $(OBJ)

.PHONY: all clean
