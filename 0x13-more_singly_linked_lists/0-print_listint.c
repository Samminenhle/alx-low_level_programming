#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int a;

	if (h == NULL)
		return (0);
	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
	
