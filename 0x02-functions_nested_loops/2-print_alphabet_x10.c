#include "main.h"

/**
 * main - prints 10x the alphabets in lower case
 *
 *Description 'prototype'
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar(\n);
	return (0);
}
