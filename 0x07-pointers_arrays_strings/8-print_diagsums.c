#include <stdio.h>

/**
 * print_diagsums - unction that prints the sum of the two diagonals
 *
 * @a: points to a 2D array
 * @size: is the size of a colomn or row
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	 printf("%d, %d\n", sum1, sum2);
}
