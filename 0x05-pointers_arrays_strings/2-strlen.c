#include "main.h"

/**
 * int _strlen - returns the length of a string
 *@s: character to check
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
