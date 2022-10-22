#include "main.h"

/**
 * _isupper - checks for upercase character
 *
 * @c: characterto be checked
 * Return: 1 if c is uppercas, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
