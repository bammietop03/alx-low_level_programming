#include "main.h"
/**
 * main - execute the print_alphabet function
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
