#include <main.h>

/**
 * _calloc - allocates memory for an array, using malloc 
 * of nmemb elements of size bytes each and returns a pointer
 * to the allocated memory.
 * @size: allocate the element of size bytes
 * @nmemb: allocate the memmory for an array
 *
 * Return: NULL if nmemb or size is 0,
 * NULL if malloc fails`
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
