#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: a number
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");

		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");

		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
