#include "main.h"

/**
 *_atoi - convert
 *@s: string
 *
 *Return: the integer value of the string
 */
long int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
