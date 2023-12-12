#include "main.h"
/**
 * _strcat - concatinate two s
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
		dest++;
	*dest  = *src;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
			if (*src == '\n')
				*dest = *src;
	}
	return (tmp);
}
