#include "main.h"

/**
 * binary_to_uint - b to int
 * @b: binary string
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			result = (result << 1) | (b[i] - '0');
		else
			return (0);
	}
	return (result);
}
