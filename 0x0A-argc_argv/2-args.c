#include "stdio.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc,  char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
