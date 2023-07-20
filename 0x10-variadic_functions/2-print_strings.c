#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: contains a string
 * @n: number of argument passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);

		if (x)
		{
			printf("%s", x);
		}
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
