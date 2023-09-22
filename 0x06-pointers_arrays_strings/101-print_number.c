#include "main.h"
/**
 * print_number - print
 * @n: int
 *
 */

void print_number(int n)
{
	int len = 1, tmp = n;

	if (n == 0)
		_putchar('0');
	if (n < 0)
		_putchar('-');
	while (tmp !=  0)
	{
		tmp = tmp / 10;
		len *= 10;
	}
	while (len > 1)
	{
		_putchar((n / len) + 48);
		if (n - len > 0)
			n -= (n / len);
		len /= 10;
	}
}
