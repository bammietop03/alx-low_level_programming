#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: concat
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);



	concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[len1 + j] = s2[j];

	concat[len1 + len2] = '\0';

	return (concat);
}
