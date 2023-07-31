#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 *
 * @head: contains the head node
 * @n: integer to be added to new node
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		new->next = NULL;

		if (!*head)
			*head = new;

		else
		{
			ptr = *head;

			while (ptr->next)
				ptr = ptr->next;

			ptr->next = new;
		}
	}
	return (new);
}
