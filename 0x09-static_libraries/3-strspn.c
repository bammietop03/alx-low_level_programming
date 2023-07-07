#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer to string input
 * @accept: substring prefix
 *
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
