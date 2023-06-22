#include <stdio.h>
/**
 * main - prints 1 - 100 and prints fizz if the number is divisible by 3
 * and buzz when it is divisible by 5
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");

		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");

		else
			printf("%d", i);

		printf(" ");
	}
	printf("\n");

	return (0);
}
