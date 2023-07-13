#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of array
 * @size: size of array
 * Return: calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(nmemb * size);

	if (calloc == 0)
		return (NULL);

	memset(calloc, 0, nmemb * size);

	return (calloc);

}
