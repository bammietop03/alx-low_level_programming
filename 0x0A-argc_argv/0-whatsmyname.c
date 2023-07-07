#include "stdio.h"

/**
 * main - prints its name
 *
 * @argc: count of the arguments supplied to the program
 * @argv: is an array of pointers to the strings which are those arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)),  char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
