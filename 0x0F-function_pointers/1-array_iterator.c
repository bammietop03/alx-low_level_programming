#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * in an array
 *
 * @array: contain the array
 * @size: size of array
 * @action: is a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i])
		}
	}
}
