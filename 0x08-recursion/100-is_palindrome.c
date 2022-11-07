#include "main.h"

/**
 * palindrome_scanner - sans if a string is palindromic
 * @s: string
 * @a: left index
 * @b: right index
 *
 * Return: 1 if a string is a palindrome, else 0.
 */
int palindrome _scanner(char *s, int a, int b)
{
	if (s[a] == s[b])
		if (a > b / 2)
			return (1);
		else
			return (palindrome_scanner(s, a + 1, b - 1));
	else
		return (0);
}

/**
 * is_palindrome - scans if a string is palidromic 
 * @s: string
 *
 * Return: 1 if a string is a palindrome and
 * otherwise 0
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
