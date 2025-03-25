
# =====================================================================
#  Name: Makefile
#  Description: This Makefile compiles and links a custom printf
#               implementation written in C.
#
#  Usage:
#    - `make`       : Compiles and builds the `printf` binary.
#    - `make clean` : Removes object files and the binary.
#    - `make re`    : Rebuilds the entire project.
#
# =====================================================================

CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

SRC = $(wildcard *.c)

TARGET = printf

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

re: clean all

