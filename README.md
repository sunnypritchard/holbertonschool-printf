# _printf

![_printf Banner](/img/_printf-banner.png)


## Description

This project involves creating a custom implementation of the standard printf function in C.
The _printf function allows you to display formatted output based on format specifiers and provided arguments.


## Compilation Command

To compile `_printf`, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requirements

The project was developed and tested in the following environment:

- Ubuntu 20.04 LTS
- GCC (GNU Compiler Collection)
- Git for source code management

## Usage Examples

### Example 1: Printing a string and char

```c
#include "main.h"

int main(void)
{
	_printf("Hello, %s%c\n", "world", '!');
	return (0);
}
```

***Expected Output:***

```
Hello, world!
```

### Example 2: Printing an integer

```c
int main(void)
{
	_printf("The first number is: %d and second number is: %i\n", 42, 85);
	return (0);
}
```

**Expected Output:**

```
The first number is: 42 and second number is: 85
```

## Man Page

To view the manual page for `_printf`, use the following command:

```sh
man ./man_3_printf
```

To make the man page globally accessible, move it to the system’s manual directory:

```sh
# Check your man path
manpath 
```

```sh
sudo mv man_3_printf /usr/local/man/man3/
sudo mandb  # Update the man database
```
Then, you can simply use:
```sh
man man_3_printf
```

## Testing

To run tests, use the [Makefile](/Makefile) to check the overall functionality of the program, compile with `main.c` as the main file:

Run `make` or `make all` to compile

```sh
sunny-pritchard@agent007:~/Work/holbertonschool-printf/test$ make

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format -o printf main.c print_char.c _printf.c print_int.c print_percent.c print_str.c process_format.c _putchar.c
```
Execute the compiled program:
```sh
sunny-pritchard@agent007:~/Work/holbertonschool-printf/test$ ./printf 

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
```
Run `make valgrind` to check for memory leaks
```sh
sunny-pritchard@agent007:~/Work/holbertonschool-printf/test$ make valgrind

==87208== HEAP SUMMARY:
==87208==     in use at exit: 0 bytes in 0 blocks
==87208==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==87208== 
==87208== All heap blocks were freed -- no leaks are possible
==87208== 
==87208== For lists of detected and suppressed errors, rerun with: -s
==87208== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

## Flowchart

<div align="center">
	<img src="/img/flowchart.png">
</div>

## Authors

- [PRITCHARD Sunny](https://github.com/sunnypritchard)
- [VENTURA Jules](https://github.com/Juleslgc)