#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: contains a string
 * @n: number of argument passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	if (n == 0 || separator == NULL)
		exit(98);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i == n - 1)
			printf("%d\n", x);
		else
			printf("%d%c ", x, *separator);
	}

	va_end(args);
}
