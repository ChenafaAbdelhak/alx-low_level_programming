#include "main.h"
/**
 * print_rev - print reversed
 * @s: strint to prt
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchat('\n');
}
