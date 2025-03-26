#include "main.h"
/**
 * print_int - Function to print an integer.
 * @args: Variable argument list containing the integer to print.
 * Description: This function takes an integer from a list of arguments
 * and displays it character by character to standard output. It also
 * handles negative integers by displaying a minus sign before the number.
 * Return: Returns the total number of characters printed.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int abs_value;
	unsigned int divisor = 1;

	if (n < 0)
	{
		count += _putchar('-');
		abs_value = -n;
	}
	else
	{
		abs_value = n;
	}
	/**Find the largest power of 10*/
	while (abs_value / divisor >= 10)
	{
		divisor = divisor * 10;
	}
	/**Extract the numbers one by one*/
	while (divisor > 0)
	{
		count += _putchar((abs_value / divisor) + '0');
		abs_value %= divisor;
		divisor /= 10;
	}
	return (count);
}
