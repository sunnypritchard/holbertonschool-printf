# =====================================================================
#  Makefile - Build system for custom printf implementation
#
#  Description: This Makefile automates the compilation of a custom printf.
#               It compiles all `.c` files.
#
#
# Targets:
#   all      - All target`
#   clean    - Removes all object files and the static library
#   re       - Recompiles the entire project from scratch
#   valgrind - Runs Valgrind on the compiled binary to check for memory leaks
#
#
# Variables:
#   CC       - The compiler (GCC)
#   CFLAGS   - Compiler flags for warnings and compliance
#   SRC      - List of all `.c` source files
#   TARGET   - The name of the output static library
#
# Usage:
#   - Run `make` or `make all` to compile.
#   - Run `make clean` to remove generated files.
#   - Run `make re` to clean and recompile.
#   - Run `make valgrind` to check for memory leaks.
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
		rm -f $(TARGET)  # Ensure this uses a TAB, not spaces

re: clean all

valgrind: $(TARGET)
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(TARGET)