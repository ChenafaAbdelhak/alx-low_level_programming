#include "main.h"

/**
 * set_bit - set a bit in a position
 * @n: pointer to the number
 * @index: index
 * Return: status 1 r 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	mask = mask << index;
	*n |= mask;
	return (1);
}
