#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of undefiened number of variables
 * @n: variables count
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}
	va_end(ar);
	return (sum);
}
