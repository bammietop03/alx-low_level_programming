#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - It adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list
 * @str: The string to be duplicated
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr, *new_node = malloc(sizeof(list_t));

	if (!head)
		return (NULL);

	if (new_node)
	{
		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}

		new_node->len = strlen(str);
		new_node->next = NULL;

		if (!*head)
			*head = new_node;
		else
		{
			curr = *head;

			while (curr->next)
				curr = curr->next;

			curr->next = new_node;
		}

	}

	return (new_node);

}
