#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			/* Handle negative numbers */
			if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
					_putchar('0' + (-n / 10));
				_putchar('0' + (-n % 10));
			}
			else
			{
				if (n >= 10)
					_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}

			/* Print comma and space for all but the last number */
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			/* Handle negative numbers */
			if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
					_putchar('0' + (-n / 10));
				_putchar('0' + (-n % 10));
			}
			else
			{
				if (n >= 10)
					_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}

			/* Print comma and space for all but the last number */
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
