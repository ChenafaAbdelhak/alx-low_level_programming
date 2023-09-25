#include "main.h"
/**
 * _memset - fill
 * @s: adress to fill
 * @b: char to fill with
 * @n: number of adress cells to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
