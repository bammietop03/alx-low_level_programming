#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 *
 * @argc: count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc,  char *argv[])
{
	int i;
	int sum = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("Error\n");

	return (0);
}
