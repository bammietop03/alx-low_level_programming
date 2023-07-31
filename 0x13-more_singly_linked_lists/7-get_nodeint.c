#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t list
 *
 * @head: contains the first node
 * @index: index of node to be printed
 * Return: ptr->n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head && n != index)
	{
		head = head->next;
		n++;
	}
	return (head);
}
