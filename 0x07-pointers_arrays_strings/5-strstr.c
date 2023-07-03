#include <string.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: points to a string
 * @needle: points to a string also
 * Return: i
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = strstr(haystack, needle);

	return (i);
}
