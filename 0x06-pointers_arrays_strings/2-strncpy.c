#include "main.h"
/**
 * _strncpy - copy
 * @dest: dest
 * @src: src
 * @n: n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
