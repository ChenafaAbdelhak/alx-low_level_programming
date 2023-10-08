#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat s1 with n of s2
 * @s1: first string
 * @s2: second string
 * @n: number of letter of s2 to concat
 * Return: pointer to the concat s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *str;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(*s1) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	while (i < (len1 + n))
	{
		if (i < len1)
			str[i] = s1[i];
		if (i >= len1)
			str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';

	return (str);
}
