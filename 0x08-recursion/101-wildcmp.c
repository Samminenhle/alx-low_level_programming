#include "main.h"

/**
 * str_checker - checks if the two strings are the same
 * @s1: first string
 * @s2: second string
 * @a: a index
 * @b: b index
 *
 * Return: 1 if the two strings are same, 0 otherwise.
 */

int str_checker(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
		return (1);
	if (s1[a] == s2[b])
		return (str_checker(s1, s2, a + 1, b + 1));
	if (s1[a] == '\0' && s2[b] == '*')
		return (str_checker(s1, s2, a, b + 1));
	if (s2[b] == '*')
		return (str_checker(s1, s2, a + 1, b) || str_checker(s1, s2, a, b + 1));
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
