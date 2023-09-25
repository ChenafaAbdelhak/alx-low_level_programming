#include "main.h"
/**
 * _strspn - search prefix
 * @s: string
 * @accept: prefix str
 * Return: nbr of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, prev_match = 1, nbr_match = 0;

	prev_match = is_match(s[0], accept);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (prev_match == 1)
		{
			if (is_match(s[i], accept) == 1)
			{
				nbr_match++;
			}
			prev_match = is_match(s[i], accept);
		}
		else
		{
			return (nbr_match);
		}

	}
	return (nbr_match);
}

/**
 * is_match - testmatching
 * @c: char
 * @segment: template
 * Return: 0 or 1
 */
unsigned int is_match(char c, char *segment)
{
	int i;

	for (i = 0; segment[i] != '\0'; i++)
	{
		if (segment[i] == c)
			return (1);
	}
	return (0);
}
