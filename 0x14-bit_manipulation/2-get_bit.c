#include "main.h"

/**
 * get_bit - get the indexed bit
 * @n: number
 * @index: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
