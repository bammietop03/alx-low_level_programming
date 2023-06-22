#include <stdio.h>
#include "main.h"
/**
 * main - prints 1 - 100 and prints fizz if the number is divisible by 3
 * and buzz when it is divisible by 5
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf(" %d", i);
		} else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);
}
