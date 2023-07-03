#include <string.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: receive a characters from c
 * @c: contains characters
 *
 * Return: strchr(s, c)
 */

char *_strchr(char *s, char c)
{
	char *i = strchr(s, c);

	return (i);
}
