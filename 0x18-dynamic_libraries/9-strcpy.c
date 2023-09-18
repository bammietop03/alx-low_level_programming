#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 *
 * @dest: is a pointer variable that accepts the copy of src
 * @src: string to be copied
 *
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
