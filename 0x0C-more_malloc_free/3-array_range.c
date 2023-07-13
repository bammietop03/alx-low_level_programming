#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
