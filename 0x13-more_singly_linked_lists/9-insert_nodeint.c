#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position
 *
 * @head: points to the first node
 * @idx: index at which a new node is inserted
 * @n: the value to be added
 * Return: temp
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);

	temp = *head;
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx - 1 && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
