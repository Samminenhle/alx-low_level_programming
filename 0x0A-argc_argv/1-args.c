#include <stdio.h>

/**
 * main prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument v
 *
 * Return: 0
 * */

int main(int arg, char **argv)
{
	(void)argv;

	printf("%d\n",arg - 1);
	return (0);
}
