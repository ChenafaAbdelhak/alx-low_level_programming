#include <stddef.h>
#include "main.h"
/**
 * _strstr - search for str
 * @haystack: str 1
 * @needle: str 2
 * Return: str
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
