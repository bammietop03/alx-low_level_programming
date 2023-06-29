#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 *
 * @s: pointer that accepts the string
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);

}
