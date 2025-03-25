#include "main.h"

/**
 * print_percent - Handles the '%' format specifier.
 * @args: The argument list (unused in this function).
 *
 * Description: This function prints a literal '%' character to the output.
 *              The argument list is not used, but it is included to match
 *              the function signature for compatibility with the rest of
 *              the _printf function.
 *
 * Return: Always returns 1, as it prints one character.
 */

int print_percent(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}
