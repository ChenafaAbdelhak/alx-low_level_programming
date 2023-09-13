#include "main.h"
/**
 * print_last_digit - p
 * @n: integer
 * Return: last
 */
int print_last_digit(int n)
{
	int last = 0;
	
	if (n < 0)
	{
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	last = n % 10;
	_putchar('0' + last);
	return (last);
}
