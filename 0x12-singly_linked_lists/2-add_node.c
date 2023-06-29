#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - adds a new node at the beginning of a list_t list.
 * @s: character to use
 *
 * Return: the address of the new element, or NULL if it failed
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginning of a list_t list.
 * @head: list head
 * @str: value
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add ==NULL)
		return (NULL);
	add->strlen = strdup(str);

	add-> = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
