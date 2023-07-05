#include <unistd.h>

/**
 * _putchar - prints the character c to the stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
