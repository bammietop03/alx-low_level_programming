#include "lists.h"

/**
 * sum_dlistint - adds up values of linked list
 * @head: points to the linked list
 * Return: total
 */

int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
