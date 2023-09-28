#include "main.h"
/**
 * is_prime_number - check
 * @n: number
 * Return: boolean
 *
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (help_prime(n, n - 1));
}
/**
 * help_prime - chekc prime
 * @n: number
 * @check: n to check
 * Return: test
 *
 */
int help_prime(int n, int check)
{
	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);
	return (help_prime(n, check - 1));
}
