#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search
 * @s: string
 * @accept: prefix str
 * Return: pointer to first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_match(s[i], accept) == 1)
		{
			return (s + i);
		}
	}
		return (NULL);
}

/**
 * is_match - testmatching
 * @c: char
 * @segment: template
 * Return: 0 or 1
 */
unsigned int is_match(char c, char *segment)
{
	int i;

	for (i = 0; segment[i] != '\0'; i++)
	{
		if (segment[i] == c)
			return (1);
	}
	return (0);
}
