#include "main.h"
#include <stdlib.h>

/**
 * _atoi -  convert a string to an integer
 *
 * @s: String to be converted
 *
 * Return: sign * num
 */

int _atoi(char *s)
{

	unsigned int num = 0;
	int sign = 1;
	int seenDigit = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
			seenDigit = 1;
		}

		else if (seenDigit)
		{
			break;
		}
		s++;
	}

	return (sign * num);
}
