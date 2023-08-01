#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: points to the head of the linked list
 * @index: index pf the node to be deleted
 *
 * Return: 1 if success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *curr;

	curr = *head;
	ptr = *head;
	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
	}
	else
	{
		while (index != 0)
		{
			ptr = curr;
			curr = curr->next;
			index--;
		}
		if (index != 0)
			return (-1);

		ptr->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return (1);
}
