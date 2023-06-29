#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string to be capitalized
 * Return: @str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
			str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (islower(str[i]))
				str[i] = toupper(str[i]);
		}

		i++;
	}

	return (str);
}
