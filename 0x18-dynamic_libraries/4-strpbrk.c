#include <string.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: points to a string
 * @accept: also points to a string
 *
 * Return: i
 */

char *_strpbrk(char *s, char *accept)
{
	char *i = strpbrk(s, accept);

	return (i);
}
