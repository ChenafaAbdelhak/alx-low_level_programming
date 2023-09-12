#include "main.h"
/**
 * _islower - test if the letter is lower
 * @arg1 - character
 * Return: 1 if lowe or 0 if other
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
