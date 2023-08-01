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
 * Return: temp
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *curr;

	if (!head || !*head)
		return (-1);

	ptr = *head;
	curr = *head;

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
		ptr->next = curr->next;
		free(curr);
		curr = NULL;
	}
	return (1);
}
