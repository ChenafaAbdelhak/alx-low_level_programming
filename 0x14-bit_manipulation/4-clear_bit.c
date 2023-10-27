#include "main.h"

/**
 * clear_bit - set bit to 0 at an index
 * @n: number
 * @index: index
 * Return: status 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index < (sizeof(unsigned int) * 8))
	{
		mask = mask << index;
		*n &= ~mask;
		return (1);
	}
		return(-1);
}
