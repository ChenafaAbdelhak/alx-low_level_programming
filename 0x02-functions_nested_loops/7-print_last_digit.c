#include "main.h"
#include <limits.h> /* for INT_MIN */

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to extract and print the last digit from
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		_putchar('8'); /* Manually print '8' for the last digit of INT_MIN */
		return (8); /* Return 8, as it's the last digit of INT_MIN */
	}
	else if (n < 0)
		last_digit = -n % 10;
	else
		last_digit = n % 10;

	_putchar('0' + last_digit); /* Print the last digit as a character */
	return (last_digit);
}

