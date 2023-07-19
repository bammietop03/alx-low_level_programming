#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: Pointer to the array of integers.
 * @size: size of the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: Index of found integer and -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
