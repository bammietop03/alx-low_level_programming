#include "lists.h"

/**
 * free_list - The program frees a list_t list.
 * @head:  Pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *next, *curr = head;

	while (curr)
	{
		next = curr->next;
		free(curr->str);
		free(curr);

		curr = next;
	}

}
