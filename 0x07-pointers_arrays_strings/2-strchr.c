#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for a char
 * @s: the buffer
 * @c: char
 * Return: the char position
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
