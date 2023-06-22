#include "main.h"
/**
 * print_most_numbers - prints all numbers from 0 - 9 except 2 & 4
 *
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)

	{
		if (m == 2 || m == 4)

		{
			continue;
		}
		_putchar(lower);
	}
	_putchar('\n');
}
