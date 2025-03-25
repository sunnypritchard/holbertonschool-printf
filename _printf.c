#include "main.h"

/**
 * _printf - A simple printf function that handles format specifiers.
 * @format: The format string containing format specifiers.
 *
 * Description: This function processes the format string, prints characters
 *              and calls the appropriate functions for each format specifier
 *              (%c, %s, etc.) while handling any edge cases like consecutive
 *              '%' characters.
 *
 * Return: Returns the number of characters printed, or -1 if an error occurs.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	count = 0;

	if (format == NULL)
	{
		return (-1);
	}
	
	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			count += process_format(*format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
