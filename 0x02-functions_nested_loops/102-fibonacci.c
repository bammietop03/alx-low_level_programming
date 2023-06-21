#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	long long int a = 2;
	long long int b = 1;
	long long int c;
	int n;

	printf("%lld, ", b);
	printf("%lld, ", a);

	for (n = 3; n <= 50; n++)

	{

		c = a + b;
		if (n == 50)

		{
			printf("%lld", c);
		}
		else

		{
			printf("%lld, ", c);
			b = a;
			a = c;
		}

	}
	printf("\n");

	return (0);
}

