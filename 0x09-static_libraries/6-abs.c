#include "main.h"
/**
 * _abs - checks for absolute value
 * @num: integer to be check
 * Return: -num if num is negative, num
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
