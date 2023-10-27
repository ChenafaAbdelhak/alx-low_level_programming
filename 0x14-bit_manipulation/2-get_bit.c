#include "main.h"

/**
 * get_bit - get the indexed bit
 * @n: number
 * @index: index
 * Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
