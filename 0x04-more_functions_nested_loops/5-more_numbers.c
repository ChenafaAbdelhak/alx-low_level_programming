#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	char i,j;

	while (i <= '1')
	{
		if (i > '0')
			_putchar(i);
		i++;
		while (j <= '9')
		{
			_putchar(j);
			j++;
		}
	}
	_putchar('\n');
}
