#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at index
 * @head: points to the linked list
 * @index: index of where the new list is inserted
 *
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (tmp != NULL && i != index)
	{
		i++;
		tmp = tmp->next;
	}
	if (index == i)
		return (tmp);
	else
		return (NULL);
}
