#include "main.h"
/**
 * _strcpy - copy
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int len = 0, i = 0;

	ptr = dest;
	while (src[len] != '\0')
		len++;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (ptr);
}
