#include "main.h"
/**
 * _memcpy - copy n src to dest
 * @dest: dest
 * @src: src
 * @n: cells to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
