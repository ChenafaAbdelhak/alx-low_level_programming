#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatunate two strings
 * @s1: first s
 * @s2: second s
 * Return: ptr to s
 */

char *str_concat(char *s1, char *s2)
{
	int size_1 = 0, size_2 = 0, i, j;
	char *str = NULL;

	if (s1 == NULL)
		size_1 = 0;
	else
		while (s1[size_1] != '\0')
			size_1++;
	if (s2 == NULL)
		size_2 = 0;
	else
		while (s2[size_2] != '\0')
			size_2++;

	str = malloc(size_1 + size_2 + 1);
	if (str == NULL)
		return (str);
	j = 0;
	if (s1 != NULL)
		for (i = 0; i < size_1; i++)
		{
			str[j] = s1[i];
			j++;
		}
	if (s2 != NULL)
		for (i = 0; i < size_2; i++)
		{
			str[j] = s2[i];
			j++;
		}
	else
		str[j] = '\0';
	return (str);
}
