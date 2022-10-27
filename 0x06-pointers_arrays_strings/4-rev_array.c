#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @an: number
 *
 *Return: zero
 */
void reverse_array(int *a, int n)
{
	int s;
	int b;

	for (s = 0; s < n; s++)
	{
		n--;
		t = a[s];
		a[s] = a[n];
		a[n] = t;
	}
}
