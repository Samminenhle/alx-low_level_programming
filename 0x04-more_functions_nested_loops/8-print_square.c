#include "main.h"

/**
 * print_square - function that prints a square followed a square
 * @size: size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
