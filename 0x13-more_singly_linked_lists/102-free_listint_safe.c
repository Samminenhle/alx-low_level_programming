#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - that frees a listint_t list
 * @head: pointer
 *
 * Return: number of nodes
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
			free(list);
			return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
