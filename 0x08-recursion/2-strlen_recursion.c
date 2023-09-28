#include "main.h"
/**
 * _strlen_recursion - count leters;
 * @s: string
 * Return: lenth
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
