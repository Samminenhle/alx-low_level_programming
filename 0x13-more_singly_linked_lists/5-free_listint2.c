#include "lists.h"

/**
 * free_listint2 - that frees a listint_t list.
 * @head: a pointer to the head of the linked list
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	for (; *head;)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

