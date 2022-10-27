#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: character to
 * @src: character from
 * @n: number of character to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
