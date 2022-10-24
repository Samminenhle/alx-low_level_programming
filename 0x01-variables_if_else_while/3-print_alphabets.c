#include <stdio.h>

/**
 *main - alphabets in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		putchar(la);

	for (la = 'A'; la <= 'Z'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
