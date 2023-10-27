#include "main.h"

/**
 * flip_bits - return how much bit to flip
 * @n: n
 * @m: m
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;
	unsigned int count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count += flip & 1;
		flip = flip >> 1;
	}
	return (count);
}
