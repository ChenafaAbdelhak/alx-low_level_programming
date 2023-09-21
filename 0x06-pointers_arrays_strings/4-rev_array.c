#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: elemnets n
 */

void reverse_array(int *a, int n)
{
	int len = 0, i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
