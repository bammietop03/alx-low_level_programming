#include "main.h"
#include <string.h>

/**
 * leet - a function that encodes a string into 1337
 *
 * @str: string input
 *
 * Return: @str
 */

char *leet(char *str)
{
	char *replace = "aAeEoOtTlL";
	char *with = "4433007711";
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; replace[j] != '\0'; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = with[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
