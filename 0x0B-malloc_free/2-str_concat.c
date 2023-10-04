#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _str_concat - concatunate two strings
 * @s1: first s
 * @s2: second s
 * Return: ptr to s
 */

char *str_concat(char *s1, char *s2)
{
	int size_1 = 0, size_2 = 0, i, j;
	char *str = NULL;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[size_1] != '\0')
		size_1++;
	while (s2[size_2] != '\0')
		size_2++;
	
	str = malloc(size_1 + size_2 - 1);
	j = 0;
		for (i = 0; i < size_1; i++)
		{
			str[j] = s1[i];
			j++;
		}
		for (i =0; i < size_2; i++)
		{
			str[j] = s2[i];
			j++;
		}
	return (str);
}