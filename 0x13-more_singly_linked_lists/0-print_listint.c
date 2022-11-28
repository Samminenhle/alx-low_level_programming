#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head
 *
 * Return: the number of nodes
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
	
