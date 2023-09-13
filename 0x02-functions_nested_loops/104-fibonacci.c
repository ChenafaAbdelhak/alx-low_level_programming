#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0
 */
int main(void)
{
	int fib_a, fib_b, fib_c, fib_b1, fib_b2, fib_c1, fib_c2;
	fib_b = 1;
	fib_c = 2;

	printf("%d", fib_b);

	for (fib_a = 1; fib_a < 91; fib_a++)
	{
		printf(", %d", fib_c);
		fib_c = fib_c + fib_b;
		fib_b = fib_c - fib_b;
	}

	fib_b1 = fib_b / 1000000000;
	fib_b2 = fib_b % 1000000000;
	fib_c1 = fib_c / 1000000000;
	fib_c2 = fib_c % 1000000000;

	for (fib_a = 92; fib_a < 99; ++fib_a)
	{
		printf(", %d", fib_c1 + (fib_c2 / 1000000000));
		printf("%d", fib_c2 % 1000000000);
		fib_c1 = fib_c1 + fib_b1;
		fib_b1 = fib_c1 - fib_b1;
		fib_c2 = fib_c2 + fib_b2;
		fib_b2 = fib_c2 - fib_b2;
	}

	printf("\n");
	return (0);
}
