#include <stdio.h>
/**
 * main - print out the data sizes in c
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char 1;
	int 2;
	long int 3;
	long long int 4;
	float 6;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(1));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(2));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(3));
	printf("Size of a long long int: %lu byte\n",(unsigned long)sizeof(4));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(6));
	return (0);
}
