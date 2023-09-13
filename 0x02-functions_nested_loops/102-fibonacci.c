#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	long n1, n2, tmp, i = 1;

	n1 = 0;
	n2 = 1;
	while (i <= 50)
	{
		printf("%ld, ", n1 + n2);
		tmp = n1;
		n1 = n2;
		n2 = n2 + tmp;
		i++;
	}
	putchar('\n');

	return (0);
}
