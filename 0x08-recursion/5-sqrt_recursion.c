#include "main.h"

/**
 * check - checks for the square root
 * @i: int
 * @j: int
 *
 * Return: integer
 */

int check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int to check sqrt
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
