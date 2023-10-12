#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print undefined number of integers
 * @separator: char to separate printed integers
 * @n:the number of integers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (separator)
			if (i != n - 1)
					printf("%s", separator);
	}
	printf("\n");
}
