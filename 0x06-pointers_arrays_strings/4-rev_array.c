#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integer
 *
 * @a: contains array of intergers
 * @n: is the number of array
 */

void reverse_array(int *a, int n)
{
	int j = n - 1;
	int k = 0;

	while (j >= k)
	{
		int temp = a[k];

		a[k] = a[j];
		a[j] = temp;
		j--;
		k++;
	}

}
