#include "main.h"
/**
 * _strlen - calculete length
 * @s: string
 * return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
