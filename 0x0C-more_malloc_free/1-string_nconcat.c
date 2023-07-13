#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to be copied
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	concat = malloc((len_s1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < len_s1)
	{
		concat[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n)
	{
		concat[i + j] = s2[j];
		j++;
	}

	concat[i + j] = '\0';

	return (concat);
}
