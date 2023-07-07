#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc,  char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(*argv[i] >= 'a' && *argv[i] <= 'z'))
				sum += atoi(argv[i]);

			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
