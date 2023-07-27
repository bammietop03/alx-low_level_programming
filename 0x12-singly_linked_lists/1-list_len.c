#include "lists.h"
#include <stddef.h>

/**
 * list_len - It returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);
}
