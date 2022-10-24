#include <stdio.h>

/**
 *main - print alphabets in lowercase except for q and e
 *
 * Return: Always 0
 */
int mai(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
