#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: accept scr string
 * @src: is the string that append to dest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
