#include "main.h"

/**
 * print_square - prints '#' in size number of time
 * @size: number of times # will be printed
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int alpha, beta;

		for (alpha = 0; alpha < size; alpha++)
		{
			for (beta = 0; beta < size; beta++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
