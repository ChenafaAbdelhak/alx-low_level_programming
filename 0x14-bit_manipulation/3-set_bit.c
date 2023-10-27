#include "main.h"

/**
 * set_bit - set a bit in a position
 * @n: pointer to the number
 * @index: index
 * Return: status 1 r 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	(*n) = (((*n) >> index) | 1) << 1;
	return (1);
}
