#include "main.h"
/**
 * more_numbers - print
 */
void more_numbers(void)
{
	char i = '0', j = '0';

	while (i <= '1')
	{
		j = 0;
		if (i > '0')
			_putchar(i);
		while (j <= '9')
		{
			if (i == '1' && j == '5')
				break;
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
