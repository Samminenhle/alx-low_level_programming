#include "main.h"

/**
 * int flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 *
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int t, s;

	t = 0;
	result = 1;
	differnce = n ^ m;
	for (s = 0; s < (sizeof(unsigned long int) * 6); s++)
	{
		if (result == (differnce & result))
			t++;
		result <<= 1;
	}

	return (t);
}
