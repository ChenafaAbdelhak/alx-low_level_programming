#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	long n1, n2, tmp, i = 2;

	n1 = 1;
	n2 = 2;
	tmp = 0;
	i++;
	while (i <= 50)
	{
		printf("%ld, ", n1 + n2);
		tmp = n1;
		n1 = n2;
		n2 = n2 + n1;
		i++;
	}
	putchar('\n');

	return (0);
}
