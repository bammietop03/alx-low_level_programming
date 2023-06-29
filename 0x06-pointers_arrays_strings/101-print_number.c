#include "main.h"

/**
 * print_number - print numbers with _putchar
 *
 * @n: integer
 */

void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
		print_number(i / 10);

	_putchar('0' + (i % 10));
}
