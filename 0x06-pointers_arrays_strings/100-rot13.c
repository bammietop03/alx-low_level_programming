#include "main.h"
#include <string.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * @str: string input
 *
 * Return: @str
 */

char *rot13(char *str)
{
	char *replace = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; replace[j] != '\0'; j++)
		{
			if (str[i] == replace[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
