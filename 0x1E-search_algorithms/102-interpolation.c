#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value == array[low])
		return (low);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
