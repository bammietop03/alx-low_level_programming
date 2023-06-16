#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate a random number to int n variable and confirms
 *prints if the numbers is negative or positive
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
