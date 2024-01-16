#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *nextts;

	if (list == NULL)
		return (NULL);

	for (node = nextts = list; nextts->next != NULL && nextts->n < value;)
	{
		node = nextts;
		if (nextts->express != NULL)
		{
			nextts = nextts->express;
			printf("Value checked at index [%ld] = [%d]\n",
					nextts->index, nextts->n);
		}
		else
		{
			while (nextts->next != NULL)
				nextts = nextts->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, nextts->index);

	for (; node->index < nextts->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
