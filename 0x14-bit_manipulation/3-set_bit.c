#include "main.h"

/**
 * int set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
