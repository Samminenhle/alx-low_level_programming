#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Head
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h);
{
	int num;

	if (h == NULL)
		return (0);
	for (num = 0; h; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
	
