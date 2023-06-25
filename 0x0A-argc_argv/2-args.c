#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: Error if the program does not receive two arguments else 1
 * */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
