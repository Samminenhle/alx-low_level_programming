#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @n:size of the triangle
 */
void print_triangle(int size)
{
	int h, tri

	if (n > 0)
	{
		for (h = 1; h <= h++)
		{
			for (tri = n - h; tri > 0; tri--)

				_putchar(' ');

			for (tri = 0; tri < h; tri++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
