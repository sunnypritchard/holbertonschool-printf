#include "main.h"

/**
 * print_str - Prints a string to stdout.
 * @args: The argument list containing the string to print.
 *
 * Description: This function retrieves the string from the argument list
 *              and prints each character to stdout. If the string is NULL,
 *              it prints "(null)" instead.
 *
 * Return: The number of characters printed (including "(null)" if the string
 *         is NULL).
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count;

	count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
