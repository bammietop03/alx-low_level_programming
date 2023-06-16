#include <stdio.h>
/**
 * main - prints number combination form 0001 to 9899
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;
	int num4;

	for (num = 48; num < 58; num++)
	{
		for (num2 = 48; num2 < 57; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				for (num4 = 48; num4 < 58; num4++)
				{
					putchar(num);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);

					if (num != 57 || num2 != 56 || num3 != 57 || num4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
