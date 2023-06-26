#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string in reverse
 *
 * @s: accept string as an argument
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
