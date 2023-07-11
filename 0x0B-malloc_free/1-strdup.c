#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy of the string given as a parameter.
 *
 * @str: is the given string
 * Return: the copied string
 */

char *_strdup(char *str)
{
	int lenght, i;
	char *copy;

	lenght = strlen(str);

	if (str == NULL)
		return (NULL);

	copy = malloc(lenght * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		copy[i] = str[i];

	return (copy);
}
