#include "main.h"
/**
 * print_line - prints '_' the amount of n variable
 * @n: is the parameter that will take the argument
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
