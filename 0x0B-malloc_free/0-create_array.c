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
	char *str = malloc((sizeof(char) * size));
	unsigned int i = 0;

	if (str == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[size] = '\0';
	return (str);
}
