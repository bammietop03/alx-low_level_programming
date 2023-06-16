#include <stdio.h>
/**
 * main - prints number combinations between 012 to 789
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 48; num < 58; num++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				if (num3 > num2 && num2 > num)
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if (num != 55 || num2 != 56 || num3 != 57)

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
