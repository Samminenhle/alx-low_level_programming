#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first struct in the linked list
 *
 * Retrun: a pointer to the first node of the of the reversed list
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *prev = NULL, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	for (next = (*head)->next; next; next = (*head)->next)
	{
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;
	return (*head);
}
