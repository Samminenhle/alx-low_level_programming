#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char alp;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
