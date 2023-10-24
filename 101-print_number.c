#include "main.h"
/**
 *
 *
 *
 *
 */
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

void print_number(int n)
{
	int i, div, t, lenth;

	t = n;
	div = 10;

	for (i=1; ; i++)
	{
		if (t / power(10, i) == 0)
		{
			lenth = i;
			break;
		}

	}
	for (i = 0; i < lenth; i++)
	{
		digit = n / power(10, lenth);
	}
}
