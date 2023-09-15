#include "main.h"
/**
 * print_triangle - tr
 * @size: size
 */
void print_triangle(int size)
{
	int i, j, n = size, k;

	if (n == 0 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= (n - i); j++)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
