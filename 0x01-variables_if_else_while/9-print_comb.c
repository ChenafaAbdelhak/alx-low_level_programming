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
		if (letter != 57)
		{
		putchar(44);
		putchar(32);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
