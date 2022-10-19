#include "main.h"

/**
 * main - prints 10x the alphabets in lower case
 *
 */
void print_alphabet_10x(void)
{
	int ten;
	char la;
	
	for (ten = 0; ten <=9; 10++)
	{
		for (la = 'a'; la = 'z'; la++)
			_putchar(la);
		_putchar('\n');

	}
}
