#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * int x: integer
 * int y: integer
 *
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	int x;
	int y;

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
