#include "main.h"

/**
 * print_triangle - prints triangle with #
 * @size: number of times # will be printed
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int alpha, beta, space;

		for (alpha = 0; alpha < size; alpha++)
		{
			for (space = 0; space < size - (alpha - 1); space++)
				_putchar(' ');

			for (beta = 0; beta <= alpha; beta++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
