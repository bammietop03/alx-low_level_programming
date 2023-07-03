#include <string.h>
#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: receive an adrress of a string
 * @b: is the constant byte
 * @n: size of @s
 *
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	return ((char *)memset(s, b, n));
}

