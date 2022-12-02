#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: bit index
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	/* in unsigned long int bit indexes range from 0 to 63 */
	if (index > 63)
		return (-1);

	/* to get bit value */
	bit_value = (n >> index) & 1;

	/* return bit value */
	return (bit_value);
}
