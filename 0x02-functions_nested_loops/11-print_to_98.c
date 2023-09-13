#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			/* Print each digit of the number */
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));

			/* Print comma and space for all but the last number */
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			/* Print each digit of the number */
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));

			/* Print comma and space for all but the last number */
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
