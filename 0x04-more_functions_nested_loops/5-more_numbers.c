#include "main.h"
/**
 * more_numbers - prints all numbers from 0 to 14
 */
void more_numbers(void)
{
	int num, times;

	for (times = 1; times <= 10; times++)
	{

		for (num = 0; num <= 14; num++)
		{

			if (num >= 10)
				_putchar((num / 10) + 48);

			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
