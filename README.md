# Project _printf

## Project description

This project is about recreating a simplified version of the standard `printf` function in C. The `_printf` function allows you to display formatted strings based on the provided arguments.

## Features

- Supports common format specificiers (`%c`, `%s`, `%d`, `%i`).
- Use `va_list` to handle a variable number of arguments.
- Directly prints to the standard output.

## Complilation Command

To compile `_printf`, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Requierements

The project was developed and tested in the following envirenment:

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
	_printf("The first number is: %d and second number is: %i\n", 42, 85)
}
```

**Expected Output:**

```
The first number is: 42 ans second number is: 85
```

## Man Page

To display the manual page for `_printf`, use the following command after adding it to the system:

```sh
Sunny
```

## Testing

Tests are conducted using test files with different use cases. To execute the tests:

```sh
Sunny
```

## Flowchart


## Authors

- [PRITCHARD Sunny] (https://github.com/sunnypritchard)
- [VENTURA Jules] (https://github.com/Juleslgc)