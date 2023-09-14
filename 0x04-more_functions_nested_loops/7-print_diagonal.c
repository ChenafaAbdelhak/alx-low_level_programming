#include "main.h"
/**
 * print_diagonal - diag
 * @n: size
 */
void print_diagonal(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
}
