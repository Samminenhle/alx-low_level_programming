#include "main.h"

/**
 * _isalpha - checks for the alphabet characters
 *
 *@c: the alphabet character
 *Return: 1 if the letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

