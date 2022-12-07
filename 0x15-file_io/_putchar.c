#include <unistd.h>

/**
 * _putchar - print the character to stdout
 * @c: character to print
 *
 * Return: On success 1 otherwise -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
