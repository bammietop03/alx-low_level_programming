#include "main.h"
/**
 * swap_int - Swaps the variables a and b
 *
 * @a: is a pointer variables that points to 'a' variables
 * @b: is a pointer variables that points to 'b' variables
 */

void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
