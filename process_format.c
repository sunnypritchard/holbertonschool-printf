#include "main.h"

/**
 * process_format - Handles format specifiers in _printf.
 * @spec: The format specifier character.
 * @args: The argument list corresponding to the format specifier.
 *
 * Description: This function processes a single format specifier and calls the
 *              appropriate handler function based on the specifier.
 *              If the specifier is recognized, the corresponding function
 *              is invoked; otherwise, the '%' character and the specifier
 *              are printed as is.
 *
 * Return: The number of characters printed by the handler function (or 2 if
 *         the specifier is unknown).
 */

int process_format(char spec, va_list args)
{
	int i;

	specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (i = 0; specifiers[i].format != '\0'; i++)
	{
		if (spec == specifiers[i].format)
		{
			return (specifiers[i].fptr_process_format(args));
		}
	}
	_putchar('%');
	_putchar(spec);
	return (2);
}
