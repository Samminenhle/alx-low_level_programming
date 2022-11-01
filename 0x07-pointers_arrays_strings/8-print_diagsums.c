#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer
 * @size: matrix
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int s, t, p, l = 0, r = 0;

	for (s = 0; s < size; s++)
	{
		p = (s * size) + s;
		l += *(a + p);
	}
	for (t = 0; t < size; t++)
	{
		p = (t * size) + (size - 1 - t);
		r += *(a + p);
	}
	printf("%s, %s\n", l, r);
}
