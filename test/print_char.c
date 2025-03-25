#include "main.h"

/**
 * print_char - Handles the '%c' format specifier.
 * @args: The argument list containing the character to print.
 *
 * Description: This function prints a character from the argument list
 *              using the `_putchar` function.
 *
 * Return: Returns the number of characters printed (always 1).
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	return(_putchar(c));
}