#include "main.h"
/**
 * int_rec - Recursive function to display the digits of an integer.
 * @n: The integer whose digits will be displayed.
 * Description: This function is called recursively to display each
 * digit of the integer passed as an argument. It divides
 * the integer by 10 at each recursive call, allowing it to
 * display each digit in the correct order (left to right).
 * Return: Returns the number of characters printed.
 */
int int_rec(int n)
{
	if (n >= 10)
	{
		int_rec(n / 10); /**Display all digits except the last one. */
	}
	return (_putchar((n % 10) + '0')); /**Display the last digit. */
}

/**
 * print_int - Function to print an integer.
 * @args: Variable argument list containing the integer to print.
 * Description: This function handles printing an integer. It
 * accounts for special cases such as negative integers and
 * the special case of INT_MIN (the smallest possible value for an int).
 * If the integer is negative, a - sign is printed. For INT_MIN,
 * the function prints -2147483648 (since -INT_MIN cannot be
 * represented as a positive integer).
 * Return: Returns the total number of characters printed.
 */

int print_int(va_list args)
{
	int n = va_arg(args, int); /**Get the integer from the argument list. */
	int count = 0;

	if (n == INT_MIN)
	{
		count += _putchar('-'); /**Print the sign for INT_MIN. */
		count += _putchar('2'); /**Print 2 (the fixed part of -2147483648). */
		n = 147483648; /**The remaining part of INT_MIN is 147483648. */
	}
	if (n < 0)
	{
		count += _putchar('-');
		n = -n; /**Make the number positive. */
	}
	if (n >= 10)
	{
		count += int_rec(n / 10);
	}
	count += _putchar((n % 10) + '0');
	return (count); /**Return the total number of characters printed. */

}
