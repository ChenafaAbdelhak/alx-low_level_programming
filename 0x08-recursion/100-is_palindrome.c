#include "main.h"

/**
 *is_palindrome - Checks if a string is a palindrome
 *@s: The string to check
 *
 *Return: 1 if 's' is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *is_palindrome_helper - Helper function to check if a string is a palindrome
 *@s: The string to check
 *@start: The starting index of the substring to check
 *@end: The ending index of the substring to check
 *
 *Return: 1 if the substring is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
