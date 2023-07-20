#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	const char *ptr = format;
	va_list args;
	char *str;

	va_start(args, format);
	while (ptr && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				break;
			}
			default:
				ptr++;
				continue;
		}

		ptr++;
		if (*ptr)
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
