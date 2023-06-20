#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase x10
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)

	{
		char letter = 'a';

		for (; letter <= 'z'; letter++)

		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
