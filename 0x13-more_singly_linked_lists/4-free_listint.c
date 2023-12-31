#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: contains the linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *next, *temp;

	temp = head;

	while (temp)
	{
		next = temp->next;
		free(temp);

		temp = next;
	}
}
