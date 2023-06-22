#include <stdio.h>
/**
 * main - prints the prime fsctor of bets
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int alpha = 2;
	unsigned long beta = 612852475143;

	while (alpha != beta)
	{
		if (beta % alpha == 0)
		{
			beta = beta / alpha;
		} else
		{
			alpha++;
		}
	}
	printf("%lu\n", beta);
	return (0);
}
