#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: accept scr string
 * @src: is the string that append to dest
 * @n: is the number of string to be concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
