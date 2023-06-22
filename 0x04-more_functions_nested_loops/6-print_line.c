#include "main.h"
/**
 * print_line - prints '_' the amount of n variable
 * @n: is the parameter that will take the argument
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	if (n <= 0)
		_putchar('\n');

	_putchar('\n');
}
