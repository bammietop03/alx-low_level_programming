#include "main.h"
/**
* _isupper - checks if c is upper or lowercase
* @c: is the parameter that takes the argument
* Return: 1 if c is uppercase, otherwise returns 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
