#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int alpha;
	int beta = 0;

	for (alpha = 0; alpha < 1024; alpha++)
	{
		if (alpha % 3 == 0 || alpha % 5 == 0)
		{
			beta += alpha;
		}

	}
	printf("%d\n", beta);
	return (0);
}
