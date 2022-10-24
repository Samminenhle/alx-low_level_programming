#include <stdio.h>

/**
 *main - print alp
 *
 * Return: Always 0
 */
int mai(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
