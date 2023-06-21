#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long int a = 2;
	unsigned long int b = 1;
	unsigned long int c;
	int n;

	printf("%lu, ", b);
	printf("%lu, ", a);

	for (n = 3; n <= 50; n++)

	{

		c = a + b;
		if (n == 50)

		{
			printf("%lu", c);
		}
		else

		{
			printf("%lu, ", c);
			b = a;
			a = c;
		}

	}
	printf("\n");

	return (0);
}

