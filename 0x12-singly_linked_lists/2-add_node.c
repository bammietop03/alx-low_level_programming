#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - It adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list
 * @str: The string to be duplicated
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = strlen(str);

		new_node->next = *head;

		*head = new_node;
	}

	return (new_node);
}
