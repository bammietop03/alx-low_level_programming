#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using
 *
 * @old_size: old size
 * @new_size: new size
 * @ptr: contains malloc memory
 * Return: new_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = realloc(ptr, new_size);

	if (new_ptr == NULL)
		return (NULL);

	free(ptr);

	return (new_ptr);

}
