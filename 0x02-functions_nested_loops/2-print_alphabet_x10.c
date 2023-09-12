#include "main.h"
/**
 * print_alphabet - print
 *
 */
void print_alphabet_x10(void)
{
	char l = 'a';
for (int i = 0; i < 10; i++)
{
	l = 'a';
	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
}
