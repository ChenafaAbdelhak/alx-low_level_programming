#include "main.h"
/**
 * print_array - print 
 * @a: array
 * @n: elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
