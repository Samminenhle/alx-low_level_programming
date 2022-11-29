#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a ponter to the head struct of linked list
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *_ptr;

	ptr = head;
	while (ptr != NULL)
	{
		_ptr = ptr->next;
		free(ptr);
		ptr = _ptr;
	}
}
