#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *@a: array to check
 *@n: number to check
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
		if (r != n - 1)
			printf("%d, ", a[r]);
		else
			printf("%d", a[r]);
	printf("\n");
}
