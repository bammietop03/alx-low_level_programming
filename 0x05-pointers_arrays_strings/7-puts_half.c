#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: is a pointer variable that accepts a string as argument
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 == 0)
	{
		i = len / 2;

		while (i <= len - 1)
		{
			_putchar(*(str + i));
			i++;
		}
	}

	else if (len % 2 != 0)
	{
		i = (len - 1) / 2;
		i += 1;
		while (i <= len - 1)
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
