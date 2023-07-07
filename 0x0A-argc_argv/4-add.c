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
		printf("%d\n", 0);

	else
	{
		for (i = 1; i < argc; i++)
		{
			int j;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
