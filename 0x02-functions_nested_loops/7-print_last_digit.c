#include "main.h"
/**
 * print_last_digit - p
 * @n: integer
 * Return: last
 */
int print_last_digit(int n)
{
	int last = (_abs(n)) % 10;

	_putchar('0' + last);
	return (last);
}
