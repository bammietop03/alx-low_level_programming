#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc,  char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
