#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i, j;
	int k = 98;

	if (k >= n)

	{
		for (i = 98; i >= n; n++)

		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else

	{
		for (j = 98; j <= n; n--)

		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
