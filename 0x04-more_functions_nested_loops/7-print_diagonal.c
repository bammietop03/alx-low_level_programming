#include "main.h"

/**
 * print_diagonal - prints '\'
 * @n: number of times \ will be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int alpha, beta;

		for (alpha = 0; alpha < n; alpha++)
		{
			for (beta = 0; beta < n; beta++)
			{
				if (beta == alpha)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
