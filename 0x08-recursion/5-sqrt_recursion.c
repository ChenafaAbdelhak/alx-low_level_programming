#include "main.h"
/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return _sqrt_help(n, 2);
}

/**
 * _sqrt_help -sqrt
 * @n: number
 * @i: sqrt
 * Return: sqrt
 */
int _sqrt_help(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    if (guess * guess > n)
        return -1;
    return _sqrt_help(n, guess + 1);
}
