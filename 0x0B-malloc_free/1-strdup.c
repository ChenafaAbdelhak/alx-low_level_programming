#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * strdup - create a copy
 * @str: the string to copy
 * Return: ptr to the str
 */
char *_strdup(char *str)
{
	char *strc = NULL;
	unsigned int j = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	strc = malloc(i);
	if (strc == NULL)
		return (NULL);
	
	while (j <= i)
	{
		strc[j] = str[j];
		j++;
	}
	return (strc);
}
