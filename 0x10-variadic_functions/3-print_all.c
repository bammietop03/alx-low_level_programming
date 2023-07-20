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
	va_list args;
	char *str;
	char *separator = "";
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
			{
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", separator, str);
				break;
			}
			default:
				break;
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
