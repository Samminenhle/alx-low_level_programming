#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to encode
 *
 * Return: Always 0
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcde"
		char b[] = "fghij"

		for (i = 0; *(s + i); i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (a[j] == *(s + i))
				{
					*(s + i) = b[j];
					break;
				}
			}
		}
	return (s);
}
