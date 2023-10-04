#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: the char to intialize with
 * Return: ptr to the str
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc((sizeof(char) * size) + 1);
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[size] = '\0';
	return (str);
}
