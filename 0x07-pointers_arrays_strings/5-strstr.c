#include "main.h"
#include <stddef.h>
/**
 * _strstr - search for str
 * @haystack: string
 * @needle: prefix str
 * Return: pointer to begining of matched
 */
char *_strstr(char *haystack, char *needle)
{
	int i, first_match = 1, i_matched = -1, len = 0;

	while (needle[len] != '\0')
		len++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0] && first_match != 1)
		{
			i_matched = 0;
			first_match = 1;
		}
		else
		{
			if (first_match == 1 && haystack[i] == needle[i_matched + 1] && needle[i_matched + 1] != '\0')
				i_matched++;
			if (needle[i_matched + 1] != haystack[i] && needle[i_matched + 1] != '\0')
			{
				first_match = 0;
				i_matched = -1;
			}
			if (needle[i_matched + 1] == haystack[i] && i_matched + 1 == len - 1)
				return (haystack + (i - i_matched + 1));

		}
	}

	return (NULL);
}
