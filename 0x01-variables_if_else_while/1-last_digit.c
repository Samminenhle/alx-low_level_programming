#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	b = a % 10;
	printf("Last digit of %d is %d ", a, b);
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
