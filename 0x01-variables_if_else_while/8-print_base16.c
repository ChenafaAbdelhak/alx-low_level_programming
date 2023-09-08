#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int letter = 48;

	while (letter <= 57)
	{
		putchar(letter);
		letter++;
	}
	letter = 97;
	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
