#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int index;
	unsigned long prev_fib = 0, current_fib = 1, sum;
	unsigned long prev_fib_half1, prev_fib_half2;
	unsigned long current_fib_half1, current_fib_half2;
	unsigned long half1, half2;

	for (index = 0; index < 92; index++)
	{
		sum = prev_fib + current_fib;
		printf("%lu, ", sum);
		prev_fib = current_fib;
		current_fib = sum;
	}

	prev_fib_half1 = prev_fib / 10000000000;
	current_fib_half1 = current_fib / 10000000000;
	prev_fib_half2 = prev_fib % 10000000000;
	current_fib_half2 = current_fib % 10000000000;

	for (index = 93; index < 99; index++)
	{
		half1 = prev_fib_half1 + current_fib_half1;
		half2 = prev_fib_half2 + current_fib_half2;

		if (prev_fib_half2 + current_fib_half2 > 999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%010lu", half1, half2);
		if (index != 98)
			printf(", ");
		prev_fib_half1 = current_fib_half1;
		prev_fib_half2 = current_fib_half2;
		current_fib_half1 = half1;
		current_fib_half2 = half2;
	}
	printf("\n");
	return (0);
}
