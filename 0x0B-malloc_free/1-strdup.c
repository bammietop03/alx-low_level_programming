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


	if (str == NULL)
		return (NULL);

	lenght = strlen(str);

	copy = malloc((lenght + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < lenght; i++)
		copy[i] = str[i];

	return (copy);
}
