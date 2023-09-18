#include "main.h"
/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: character to be check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
