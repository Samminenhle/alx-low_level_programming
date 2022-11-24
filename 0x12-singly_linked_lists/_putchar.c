#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c:character to print
 *
 * Return: 1 on success, otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

