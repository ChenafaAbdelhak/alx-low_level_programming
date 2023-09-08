#include<stdio.h>
/**
 * main - entry point
 *
 * return : 0
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
