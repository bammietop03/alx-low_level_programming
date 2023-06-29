#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: store the result.
 * @size_r: size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, a, b, c;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	b = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		c = b;
		if (i >= 0)
			c += n1[i] - '0';
		if (j >= 0)
			c += n2[j] - '0';
		if (i < 0 && j < 0 && c == 0)
		{
			break;
		}
		b = c / 10;
		r[k] = c % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || b)
		return (0);
	for (k -= 1, a = 0; a < k; k--, a++)
	{
		b = r[k];
		r[k] = r[a];
		r[a] = b;
	}
	return (r);

}
