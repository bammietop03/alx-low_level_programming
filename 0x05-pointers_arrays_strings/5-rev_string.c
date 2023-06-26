#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: accept string as an argument
 */

void rev_string(char *s)
{
	int i;
	char t;

	for (i = 0; i < 10 / 2; i++)
	{
		t = s[i];
		s[i] = s[10 - i - 1];
		s[10 - i - 1] = t;
	}
	
}
