#include "main.h"

/**
 * times_table - times table function
 *
 */
void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			int i = num2 * num1;

			if (num2 == 0)
			{
				_putchar(48);
			} else if (i <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i + 48);
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
