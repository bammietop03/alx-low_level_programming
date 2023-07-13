#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of array
 * @size: size of array
 * Return: calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * (size + 4));

	if (calloc == 0)
		return (NULL);

	return (calloc);

}
