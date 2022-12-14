#include "main.h"

/**
 * scan - scan to see if number is prime
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int scan(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (scan(a + 1, b));
}

/**
 * is_prime_number - states if the input integer is a prime number
 * @n: integer
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (scan(2, n));
}
