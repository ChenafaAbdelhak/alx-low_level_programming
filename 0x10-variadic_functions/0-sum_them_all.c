#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of undefiened number of variables
 * @n: variables count
 * Return: the result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list args;
	int sum = 0;

	va_start(args, n);
	while (n > 0)
	{
		sum += va_arg(args, int);
		n--;
	}
	va_end(args);
	return (sum)
}
