#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: is the pointer that accept the array
 * @n: is the number of array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);

		i++;
	}
	printf("\n");
}
