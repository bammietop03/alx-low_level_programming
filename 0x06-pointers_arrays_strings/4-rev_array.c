#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses the content of an array of integer
 *
 * @a: contains array of intergers
 * @n: is the number of array
 */

void reverse_array(int *a, int n)
{
	int j = n - 1;

	while (j >= 0)
	{
		if (j == 0)
			printf("%d", a[j]);
		else
			printf("%d, ", a[j]);
		j--;
	}
	printf("\n");
}
