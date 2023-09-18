#include "main.h"
/**
 * _strcpy - copy
 * @dest; destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int len = 0, i;

	ptr = dest;
	while (src[len] != '\0')
		len++;
	while (i <= (len + 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (ptr);
}
