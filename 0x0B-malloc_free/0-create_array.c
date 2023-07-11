#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 *
 * @size: size of the array
 * @c: char to initialize the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (NULL);

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;

	array[i] = '\0';

	return (array);
}
