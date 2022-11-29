#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first struct in the linked list
 *
 * Retrun: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int pdiff, count, a;

	if (head == NULL)
		return (0);
	for (count = 0; head; count++)
	{
		pdiff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (pdiff > 0)
			head = head->next;
		else
		{
			a = (head->next)->n;
			printf("-> [%p] %d\n", (void *)head->next, a);
			count++;
			break;
		}
	}
	return (count);
}
