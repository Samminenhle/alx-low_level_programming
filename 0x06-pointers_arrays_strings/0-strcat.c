#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: character to
 * @scr: character from
 *
 * Return: Character
 */
char *_strncat(char *dest, char *src, int n)
{
	int a
	int b

	a = 0
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
