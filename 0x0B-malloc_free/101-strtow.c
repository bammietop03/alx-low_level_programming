#include "main.h"
#include <stdlib.h>

/**
 * is_space - checks for specific spaces
 *
 * @c: char to compair
 * Return: c if it is space or '\t' or '\n'
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_main - counts the string
 *
 * @str: is a string
 * Return: count
 */
int count_main(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]) && (is_space(str[i + 1]) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: is a string
 * Return: words
 */
char **strtow(char *str)
{
	int word_count, i, word_index, word_length, j, k;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_main(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
		{
			word_length = 0;
			j = i;

			while (!is_space(str[j]) && str[j] != '\0')
			{
				word_length++;
				j++;
			}

			words[word_index] = malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				k = 0;
				while (k < word_index)
				{
					free(words[k]);
					k++;
				}
				free(words);
				return (NULL);
			}
			k = 0;
			while (i < j)
			{
				words[word_index][k] = str[i];
				i++;
				k++;
			}
			words[word_index][k] = '\0';

			word_index++;
		}
		else
		{
			i++;
		}
	}
	words[word_index] = NULL;
	return (words);
}
