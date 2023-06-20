#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 */
void print_alphabet(void)
{

	char letter = 'a';

	for (; letter <= 'z'; letter++)

	{
		_putchar(letter);
	}

	_putchar('\n');
}
