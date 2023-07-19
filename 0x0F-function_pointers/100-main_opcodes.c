#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num, i;
	unsigned char *main_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}


	for (i = 0; i < num; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
