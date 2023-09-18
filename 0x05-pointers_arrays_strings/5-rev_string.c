#include "main.h"
/**
 * rev_string - reverse
 * @s: string
 */

void rev_string(char *s)
{
	int i,len = 0;
	char tmp;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
	tmp = s[i];
	s[i] = s[len - 1 - i];
	s[len - 1 - i] = tmp;
	}
}
