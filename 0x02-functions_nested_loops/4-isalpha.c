#include "main.h"
/**
 * _isalpha - test if c is alpha
 * @c: character
 * Return: 0 or 1
 */
int _isalpha(char c)
{
if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
