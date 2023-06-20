#include "main.h"
/**
 * print_sign - checks if the number is negative or positive
 * @n: character to be check
 * Return: 1 if n is greater than zero 0
 * retuns -1 if n is negative
 * returns 0 of n is Zero
 */

int print_sign(int n)
{
	if (n > 0)
	{

		_putchar(43);
		return (1);
	}
	else if (n < 0)

	{
		_putchar(45);
		return (-1);
	}

	else

	{
		_putchar(48);
		return (0);
	}
}
