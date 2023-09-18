#include "main.h"
/**
* _isdigit - checks if c is a number
* @c: is the parameter that takes the argument
* Return: 1 if c is number, otherwise returns 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
