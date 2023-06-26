#include "main.h"
#include <string.h>

/**
 * print_rev - prints the reverse of a string
 *
 * @s: is a parameter that accept string as an argument
 */

void print_rev(char *s)
{
	char *rev;

	int len = strlen(s);

	for (rev = s + (len - 1); rev >= s; rev--)
	{
		_putchar(*rev);
	}
	_putchar('\n');
}
