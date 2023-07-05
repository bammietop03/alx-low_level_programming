#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: integer to check
 * @d: the integer divisor
 * Return: is_prime_help
 */
int is_prime_help(int n, int d);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_help(n, 2));
}

/**
 * is_prime_help - returns 1 if the input integer is a prime number
 *
 * @n: integer to check
 * @d: the integer divisor
 * Return: is_prime_help
 */
int is_prime_help(int n, int d)
{
	if (d == n)
		return (1);

	if (n % d == 0)
		return (0);

	return (is_prime_help(n, d + 1));
}
