#include <stdio.h>

/**
 * op_add - adds two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: add
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 * op_sub - substract two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - multiply two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - divides two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: div
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - modulus of two integers
 *
 * @a: first integer
 * @b: second integer
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
