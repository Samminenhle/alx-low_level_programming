#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @c: buffer to print
 * @s: bytes of buffer
 * @1: line of buffer
 *
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}
