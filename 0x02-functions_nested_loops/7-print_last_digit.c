#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: is the main value
 *
 * Return: returns i
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;

	i = n % 10;
	_putchar(i + '0');
	return (i);
}
