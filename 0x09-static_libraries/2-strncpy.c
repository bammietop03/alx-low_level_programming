#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 *
 * @dest: accept the copied src string
 * @src: is the string to be copied
 * @n: is the number of string to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
