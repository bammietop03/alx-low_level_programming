#include <string.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: receive an adrress of a string
 * @src: is the constant byte
 * @n: size of memory
 *
 * Return: char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		return ((char *)memcpy(dest, src, n));
}
