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
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
