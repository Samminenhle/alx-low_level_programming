#include "main.h"

/**
 * main -  int _islower(int c ) print function that checks for lower cases
 *
 * Return: 1 if c is lowercase and 0  otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
