#ifndef MAIN_H
#define MAIN_H

/* C Standard library */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct specifier - Struct for format specifiers
 * @format: The format specifier (e.g., 'c', 's', 'd')
 * @f: Function pointer to corresponding handler function
 */

typedef struct specifier
{
	char format;
	int (*fptr_process_format)(va_list);
} specifier_t;

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int process_format(char spec, va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

#endif
