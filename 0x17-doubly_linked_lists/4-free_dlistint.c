#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: contians the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
