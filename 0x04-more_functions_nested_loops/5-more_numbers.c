#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	int i = 0, j = 0, k;

	for (k = 0; k < 10; k++)
	{
		i = 0;
		j = 0;
	while (i <= 1)
	{
		if (i == 1 && (j % 10) == 5)
			break;
		if (i > 0)
			_putchar(i + '0');
		_putchar((j % 10) + '0');
		if (j == 9)
			i++;
		j++;
	}
	_putchar('\n');
	}
}
