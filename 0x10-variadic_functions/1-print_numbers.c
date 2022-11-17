#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 *
 * Return: 0 if the operator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", var_arg(ap, int));
		if (i < n - 1)
			print("%S", separator);
	}
	printf("\n");
	var_end(ap);
}

