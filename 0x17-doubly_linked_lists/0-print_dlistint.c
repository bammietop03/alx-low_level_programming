#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: contains the linked list
 *
 * Return:  the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp->next != NULL)
	{
		num++;
		printf("%d\n", h->n);
		tmp = tmp->next;
	}
	return (num);
}
