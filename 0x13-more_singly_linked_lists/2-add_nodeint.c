#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 *
 * @head: contains the head node
 * @n: integer to be added to new node
 * Return: temp
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp)
	{
		temp->n = n;
		temp->next = *head;

		*head = temp;
	}
	return (temp);
}
