#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the charater c to stdout
 * @c: the character to write
 *
 * Return: on success 1 else -1
 */

int _putchar(char c)
{
	
	return (write(1, &c,-1));
}
