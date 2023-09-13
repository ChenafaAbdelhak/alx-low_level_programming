#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	long n1, n2, tmp, sum = 0;

	n1 = 0;
	n2 = 1;
	while (n2 <= 4000000)
	{
		if (n2 % 2 == 0)
			sum = sum + n2;
		tmp = n1;
		n1 = n2;
		n2 = n2 + tmp;
	}
	printf("%ld", sum);
	putchar('\n');

	return (0);
}
