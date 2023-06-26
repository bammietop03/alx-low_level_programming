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
	char *alpha = s;
	char *beta = s + len - 1;

	while (alpha < beta)
	{
		char temp = *alpha;
		*alpha = *beta;
		*beta = temp;

		alpha++;
		beta--;
	}

}
