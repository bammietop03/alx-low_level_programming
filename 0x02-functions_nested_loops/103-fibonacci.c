#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int prev = 1;
	int current = 2;
	int sumTotal = 0;
	int next = 0;

	while (current <= 4000000)

	{

		if (current % 2 == 0)
			sumTotal += current;

		next = prev + current;

		prev = current;
		current = next;
	}

	printf("%d\n", sumTotal);

	return (0);
}

