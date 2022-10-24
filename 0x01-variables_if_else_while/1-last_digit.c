#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	b = n % 10;
	printf("Last digit of %d is %d ", n, b);
	if (b > 5)
	{
		printf("and is greater than 5");
	}
	if (b == 0)
	{
		printf("and is 0");
	}
	if (b < 6 && b != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
