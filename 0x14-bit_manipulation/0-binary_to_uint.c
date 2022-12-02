#include "main.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int t;

	t = 0;
	if (!b)
		return (0);
	for (s = 0; b[s] != '\0'; s++)
	{
		if (b[s] != '0' && b[s] != '1')
			return (0);
	}
	for (s = 0; b[s] != '\0'; s++)
	{
		t <<= 1;
		if (b[s] == '1')
			t += 1;
	}
	return (t);
}
