#include <stdio.h>
/**
 * main - prints number combination form 01 to 99
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48; num < 57; num++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num != 56 || num2 != 57)

			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
