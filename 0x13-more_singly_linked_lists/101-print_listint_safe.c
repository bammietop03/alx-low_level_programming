#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: node_count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, **visited = NULL;
	size_t node_count = 0, max_nodes = 10, i;
	int already_visited = 0;

	visited = malloc(max_nodes * sizeof(const listint_t *));
	if (!visited)
		exit(98);

	while (current)
	{

		for (i = 0; i < node_count; i++)
		{
			if (visited[i] == current)
			{
				already_visited = 1;
				break;
			}
		}
		if (already_visited)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		if (node_count == max_nodes)
		{
			max_nodes *= 2;
			visited = realloc(visited, max_nodes *
					sizeof(const listint_t *));

			if (!visited)
				exit(98);
		}
		visited[node_count++] = current;
		printf("[%p] %d\n", (const void *)current, current->n);
		current = current->next;
	}

	free(visited);
	return (node_count);
}
