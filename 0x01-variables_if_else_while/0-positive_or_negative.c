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
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
