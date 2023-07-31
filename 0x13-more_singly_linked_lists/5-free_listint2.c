#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: contains the linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *next, *temp;

	if (head != NULL)
	{
		temp = *head;

		while (temp)
		{
			next = temp->next;
			free(temp);

			temp = next;
		}
		*head = NULL;
	}
}
