#include "main.h"
#include <string.h>

/**
 * puts2 - prints a string
 *
 * @str: accepts string as argument
 */

void puts2(char *str)
{
	int i = 0;
	int len = strlen(str);

	while (i <= len - 1)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
