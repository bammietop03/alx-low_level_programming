#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: count of argruments passed
 * @av: stringd of each argument passed
 * Return: alpha
 */
char *argstostr(int ac, char **av)
{
	char *alpha;
	int i, total_length, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	alpha = malloc((total_length + 1) * sizeof(char));

	if (alpha == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			alpha[k] = av[i][j];
			k++;
			j++;
		}
		alpha[k] = '\n';
		k++;
	}
	alpha[k] = '\0';
	return (alpha);
}
