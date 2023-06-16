#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48; num < 58; num++)

	{
		putchar(num);
	}

	for (num2 = 97; num2 < 103; num2++)

	{
		putchar(num2);
	}
	putchar('\n');

	return (0);
}
