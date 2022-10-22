#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 *
 *@size: size of the triangle
 *Return: Alwys 0
 */
void print_triangle(int size)
{
	int column, line, angles;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= size; column++)
		{
			for (angles = size - column; angles >= 1; angles--)
			{
				_putchar(' ');
			}
			for (line = 1; line <= column; line++)
			{
				_putchar('#');
			}
			_putchar('#');
		}
	}
}
