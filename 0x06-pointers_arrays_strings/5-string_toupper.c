#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 *
 * Return: character
 */

char *string_toupper(char *n)
{
	int s;

	s = 0;
	while (*(n + s))
	{
		if (*(n + s) >= 'a' && *(n + s) <= 'z')
			*(n + s) -= 'a' - 'A';
		s++;
	}
	return (n);
}

